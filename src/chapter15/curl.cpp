//
//  myoop.cpp
//  learncpp
//
//  Created by janko.zhang on 2/10/19.
//  Copyright © 2019 janko.zhang. All rights reserved.
//

#include "curl.h"
#include <curl/curl.h>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

size_t writeFunction(void *ptr, size_t size, size_t nmemb, std::string* data) {
    data->append((char*) ptr, size * nmemb);
    return size * nmemb;
}

class Query{
    public:
        Query();
    private:
        string data;
    protected:
        int num;
};
class SubQuery : public Query{
    SubQuery();
};

void curl_test(){
    auto curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.linux-ren.org");
        curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 1L);
        //        curl_easy_setopt(curl, CURLOPT_USERPWD, "user:pass");
        //        curl_easy_setopt(curl, CURLOPT_USERAGENT, "curl/7.42.0");
        curl_easy_setopt(curl, CURLOPT_MAXREDIRS, 50L);
        curl_easy_setopt(curl, CURLOPT_TCP_KEEPALIVE, 1L);

        std::string response_string;
        std::string header_string;
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeFunction);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_string);
        curl_easy_setopt(curl, CURLOPT_HEADERDATA, &header_string);

        char* url;
        long response_code;
        double elapsed;
        curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
        curl_easy_getinfo(curl, CURLINFO_TOTAL_TIME, &elapsed);
        curl_easy_getinfo(curl, CURLINFO_EFFECTIVE_URL, &url);

        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        curl = NULL;

        cout << "res: "  << response_code << endl;
        cout << "header: "  << header_string << endl;
    }
}

void curl_test1(){
    ofstream m_file("/tmp/curl-test", ofstream::out);
    if(!m_file){
        cerr << "open file failed" << endl;
    }
    string *readBuffer = new string("nothing");
    curl_global_init(CURL_GLOBAL_ALL);
    CURLcode res;
    CURL *curl = curl_easy_init();
    if(curl){
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.linux-ren.org");
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, readBuffer);
        curl_easy_setopt(curl, CURLOPT_VERBOSE, 0);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        m_file << *readBuffer;
        m_file.close();
        cout << "result:-----------------"<< endl;
        cout << res << endl;
        cout << *readBuffer << endl;
    }
}

void myoop(){
    curl_test();
}
