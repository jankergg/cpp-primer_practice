//
//  myios.cpp
//  learncpp
//
//  Created by janko.zhang on 1/28/19.
//  Copyright © 2019 janko.zhang. All rights reserved.
//

#include "../../header/myios.hpp"
#include <strstream>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <map>
#include <iterator>
#include <algorithm>
// istream #input
// ostream #output
// cin #input object
// cout #ostream object
// cerr #ostream object ,used to display errmsg.
// getline() #function, used to read a line of text and stored into a string object.
#define END_SYBOL '\0'
// Practice 8.1.2
istream &process_input(istream &istream, string &str)
{
    while (istream >> str && !istream.eof()){
        if(istream.bad()){
            throw runtime_error("IO stream Error");
        }
        if(istream.fail()){
            cerr << "Data error, Only Integer Acceptable , pleae retry!" << endl;
            istream.clear();
            istream.ignore(100, '\n');
            continue;
        }
        cout << "Your inputed: " << str << endl;
    }
    istream.clear();
    return istream;
}
// overload to string-parameter version.
istream &process_input(istream &istream, int &str)
{
    string s(to_string(str));
    return process_input(istream, s);
}
// practict 8.2.1
void readFile(const string &filepath, vector<string> &vs, bool mode = true){
    // open file.
    ifstream input(filepath);
    if(!input){
        cerr << "file did not open" << endl;
    }
    if(input.fail()){
        cerr << "Open file failed" << endl;
    }
    string str;
    if(mode){
        while (getline(input, str)){
            vs.push_back(str);
        }
    } else {
        while (input >> str) {
            vs.push_back(str);
        }
    }
    // close file. MUST!
    input.close();
}
void myios(const string &file)
{
    //    string str;
    //    wstring str2;
    //    process_input(wcin, str2);
    //    int a;
    //    process_input(cin, a);
    vector<string> vs;
    readFile(file, vs);
    for(auto str:vs){
        cout << str << endl;
    }

}

void str_len(const char *s){
    auto sl = strlen(s);
    cout << sl << endl;
}

map<string, string> buildMap(ifstream &ifs_def){
    cout << "running buidMap" << endl;
    map<string, string> ms;
    if(!ifs_def){
        cout << "file did not open!" << endl;
    }
    if(ifs_def.fail()){
        cout << "open file faild!" << endl;
    }
    string line;
    string key,val;
    string t,v;
    ifs_def >> t;
    getline(ifs_def, v);
    cout << "TTTTT::::" << t << endl;
    cout << "VVVVV::::" << v << endl;
//    while (getline(ifs_def, line)) {
//        auto index = line.find(' ');
//        key = line.substr(0, index);
//        // we must handle blank line.
//        // only when we got valid key
//        if(key.size()){
//            val = line.substr(index + 1, line.size()-1);
//            if(val.size()) ms.insert({key, val});
//        }
//    }
    return ms;
}
void testBuildMap(map<string, string> &mp){
    cout << "start testing buildMap"<< endl;
    cout << "Our map has: " << mp.size() << " pair of elements"<< endl;
    for(auto m:mp){
        cout << m.first << ":"<< m.second << endl;
    };
}
string wordTransform(string &key, map<string, string> &mp){
    auto it = mp.find(key);
    if(it != mp.end()){
        return it->second;
    };
    return "";
};
vector<string> split(string &s){
    string ss = s;
    string spliter(" "); // must use a string; cause " " is essentiality const chars
    auto sp = ss.find(spliter);
    vector<string> vs;
    while (sp != string::npos) {
        vs.push_back(ss.substr(0, sp));
        // ss should not contain a space in the begining
        ss = ss.substr(sp + 1, ss.size());
        sp = ss.find(spliter);
    }
    vs.push_back(ss);
    return vs;
}

void rendertext(ifstream &ifs, map<string, string> &mp){
    string s;
    if(!ifs || ifs.fail()) {
        cout << "read file failed" << endl;
    }
    // read a line.
    while (getline(ifs, s)){
        // split line into words
        vector<string> vs = split(s);
        for(auto &v:vs){
            // check if a word maches dictionary
            string out = wordTransform(v, mp);
            if(out != "")
                cout << out << " ";
            else
                cout << v << " ";
        }
        cout << endl;;
    }
};


void testSplit(int index){
    cout << "start testing testSplit" << endl;
    string test[] = { "abadf adfaf afa", "hello world!", "adfadfafdadfa"};
    vector<string> vs = split(test[index]);
    for(auto v:vs){
        cout << v << endl;
    }
}

void testWordTransform(map<string, string> &mp){
    string testCases[] = {"y", "u", "18r", "haha", "fk"};
    for(auto &tc: testCases){
        cout << "def: " << tc << " found: " << wordTransform(tc, mp) <<endl;
    };
}
void word_transform(ifstream &ifs_def, ifstream &ifs_keys){
    map<string, string> mp = buildMap(ifs_def);
    testBuildMap(mp);
//    testWordTransform(mp);
//    testSplit(2);
//    testGetText(ifs_keys);
//    rendertext(ifs_keys, mp);
//    vector<vector<string>> *vs = getText(ifs_keys);
//    for(auto &v: *vs){
//    }

}

void myios(){
    // practice 8.4
//    vector<string> vs;
//    readFile("/Users/janko/Projects/cpp/learncpp/learncpp/main.cpp", vs, false);
//    for(auto str:vs){
//        cout << str << endl;
//    }
//    int a[10] = {};
//    a[8] = 0;
//    a[0] = 1;
//    int b[10] = {1,2,3,4,5,0};
//    cout << a[1] << endl;
//    swap(a, b);
//    cout << a[1] << endl;
//    auto f = [&a, &b] {
//        return a[8] == b[8];
//    };
//    cout << f() << endl;
    multimap<int, string> mp({
        {1, "hello"},
        {1,"world"}
    });
    int search_name = 1;
    auto num = mp.count(search_name);
    auto iter = mp.find(search_name);

    cout << iter->second << endl;
    while (num) {
        cout << iter->second << endl;
        ++iter;
        --num;
    }

};

// take argv from main function
void myios(const int argc, const char* argv[]){
    ifstream def(argc>1 ? argv[1] : string(_DATA_DIR_)+"words_def");
    ifstream keys(argc>2 ? argv[2] : string(_DATA_DIR_)+"keys");
    word_transform(def, keys);
//    string teststr = "hello world, how are you!";
//    vector<string> *vs = split(teststr);
//    for(auto v:*vs){
//        cout << &v << endl;
//    }
}
