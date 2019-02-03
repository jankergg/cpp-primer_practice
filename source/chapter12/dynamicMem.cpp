//
//  dynamicMem.cpp
//  learncpp
//
//  Created by janko.zhang on 2/1/19.
//  Copyright © 2019 janko.zhang. All rights reserved.
//

#include "../../header/dynamicMem.hpp"

// this class used to imitate template
// 1. share data via dynamic vector. Using shared_ptr.
// 2. implement some operations like vector: 1). change. 2). exceptions.
//
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <stdexcept>
#include <memory>
#include <map>
#include <locale>
#include <set>

class StrBlob{
public:
    typedef vector<string>::size_type szt;
    StrBlob();
    StrBlob(initializer_list<string> il);
    
    szt size() const { return data->size(); };
    bool empty() const { return data->empty(); };
    
    // add/delete
    void push_back(const string &s) {
        data->push_back(s);
    };
    void pop_back();
    string &front();
    const string &front() const ;
    string &back();
    const string &back() const ;
    
    ~StrBlob()=default;
private:
    shared_ptr<vector<string>> data;
    void check(szt i, const string &s) const ;
};
StrBlob::StrBlob() : data(make_shared<vector<string>>()){}
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)){ }
void StrBlob::check(szt i, const string &s) const {
    if (i >= size()){
        throw out_of_range(s);
    }
}
string& StrBlob::front(){
    check(0, "front on empty StrBolb");
    return data->front();
}
const string& StrBlob::front() const {
    check(0, "front on empty StrBolb");
    return data->front();
}
string& StrBlob::back(){
    check(0, "back on empty StrBolb");
    return data->back();
}
const string& StrBlob::back() const {
    check(0, "back on empty StrBolb");
    return data->back();
}
void StrBlob::pop_back(){
    check(0, "pop_back on empty StrBolb");
    data->pop_back();
}
void testStrBlob(){
    StrBlob sb1;
    {
        StrBlob sb2 = {"hello", "world", "how","are","you" };
        cout << sb1.size() <<endl;
        cout << sb2.size() <<endl;
        sb1 = sb2;
        sb2.push_back("hhhhhh");
        cout << sb2.size() <<endl;
    }
    cout << sb1.size() <<endl;
    cout << sb1.front() <<endl;
}

vector<int> *getVector(){
    // add keyword nothrow to generate a nullptr instead of throw an Exception!
    return new (nothrow) vector<int>;
};

shared_ptr<vector<int>> get_Vector(){
    // add keyword nothrow to generate a nullptr instead of throw an Exception!
    return make_shared<vector<int>>();
};

istream &process_input(istream &istream, vector<int> &vs)
{
    int str;
    int count = 10;
    
    inputloop: while (istream >> str && count){
        if(str == -1){
            break;
        }
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
        vs.push_back(str);
        --count;
    }
    
    if(istream.fail()){
        cerr << "Data error, Only Integer Acceptable , pleae retry!" << endl;
        istream.clear();
        istream.ignore(100, '\n');
        goto inputloop;
    }
    
    istream.clear();
    return istream;
}
istream &process_input(istream &istream, shared_ptr<vector<int>> vs)
{
    int str;
    int count = 10;
    
inputloop: while (istream >> str && count){
    if(str == -1){
        break;
    }
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
    vs->push_back(str);
    --count;
}
    
    if(istream.fail()){
        cerr << "Data error, Only Integer Acceptable , pleae retry!" << endl;
        istream.clear();
        istream.ignore(100, '\n');
        goto inputloop;
    }
    
    istream.clear();
    return istream;
}
void printVector(vector<int> &vs){
    for(auto v:vs){
        cout << "Print:: " << v << endl;
    }
};
void printVector(shared_ptr<vector<int>> vs){
    for(auto &v:*vs){
        cout << "Print:: " << v << endl;
    }
};

void p12_6(){
    vector<int> *vit = getVector();
    process_input(cin, *vit);
    printVector(*vit);
    delete vit;
    vit = nullptr;
}
void p12_7(){
    shared_ptr<vector<int>> spvs = get_Vector();
    process_input(cin, spvs);
    printVector(spvs);
}
//===============================================================================================
// design data structure:
// map<int, string> int: line number, string the line word contains element.
// each line only match once, use isstringstream read single word. if word == "element" push it into map
// prototype
// Singleton model
class TextQuery{
private:
    TextQuery()
    : vtxt(make_shared<vector<string>>()), mpset(make_shared<map<string,set<int>>>()),data("janker")
    {
        cout << "class TextQuery init !" << endl;
        readFile();
    };
    // for save whole text.
    shared_ptr<vector<string>> vtxt;
    // save each words and it's line number.
    shared_ptr<map<string,set<int>>> mpset;
    string data_dir = string(_DATA_DIR_)+"data12.27";
    // a pointer to instance.
    static TextQuery *tq;
    // read file.
    void readFile(){
        ifstream ifs(data_dir);
        istringstream iss;
        string line;
        string word;
        int line_num = 0;
        if(ifs.bad())
            cerr << "bad, open file faild" << endl;
        else if(ifs.fail())
            cerr << "open file faild" << endl;
        else
            while (getline(ifs, line)) {
                vtxt->push_back(line);
                iss.clear();
                iss.str(line);
                while (iss>>word) {
                    auto it = mpset->count(word);
                    if(it>0){
                        mpset->find(word)->second.insert(line_num);
                    } else{
                        mpset->insert({word, {line_num}});
                    }
                }
                ++line_num;
            }
    }
public:
    friend QueryResult;
    string data;
    static TextQuery* getText(){
        if(tq==nullptr){
            tq = new TextQuery();
        }
        return tq;
    };
};
// must set this, or linking will fail.
TextQuery* TextQuery::tq = 0;

class QueryResult{
private:
    string query;
public:
    QueryResult(){};
    QueryResult(const char* c):query(c){};
    ~QueryResult()=default;
    void printResult(TextQuery *tq){
        auto it = tq->mpset->find(query);
        cout <<"word: \""<< query << "\" occurs " << it->second.size() << " times " << endl;
        for(const auto &m: it->second){
            cout << "(line " << m+1 << ") " << tq->vtxt->at(m)  << endl;
        }
    }
};
void p12_27(const int argc, const char **c){
    //    ifstream ifs(string(_DATA_DIR_)+"data12.27");
    //    readFile(ifs, query, mp);
    TextQuery *tq = TextQuery::getText();
    QueryResult qr(argc>1 ? c[1]: "element");
    qr.printResult(tq);
}

void dynmem(const int argc, const char **argv){
    //    testStrBlob();
    //    p12_6();
    //    p12_7();
    p12_27(argc, argv);
};
