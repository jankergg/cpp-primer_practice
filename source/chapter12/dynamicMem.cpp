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
#include <vector>

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

void dynmem(){
    testStrBlob();
};
