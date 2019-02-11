//
//  ccopy.cpp
//  learncpp
//
//  Created by janko.zhang on 2/3/19.
//  Copyright © 2019 janko.zhang. All rights reserved.
//

#include "../../header/ccopy.hpp"
#include <ostream>
#include <vector>
#include <memory>
#include <algorithm>

class nocopy{
private:
    string data;
public:
    nocopy()=default;
    nocopy(const nocopy&) {
        cout << "copied!" << endl;
    };
    ~nocopy()=default;
    string &setdata(string& s){
        data = s;
        return data;
    }
};

nocopy getnc(){
    nocopy *n = new nocopy();
    return *n;
}

class Employee{
private:
    static int sn;
    string name;
    int mysn;
public:
    Employee(){};
    Employee(const string &s):name(s), mysn(sn++){};
    Employee(const Employee& e){
        name = e.name;
        // why not ++sn ? cause in the constructor, we already assigned sn++,
        // if we use ++sn here, sn would resulted in 2 increasements.
        mysn = sn++;
    }
    Employee& operator=(Employee& e){
        name = e.name;
        return *this;
    }
    // ostream cannot be a menber function-type. because copying iostream is not allowed.
    friend std::ostream& operator<<(std::ostream& os, const Employee& dom){
        os << dom.get_name();
        return os;
    }
    
    ~Employee()=default;
    
    const string& get_name() const {
        return name;
    }
    
    int get_mysn(){
        return mysn;
    }
};
int Employee::sn = 0;

class myass{
private:
    vector<int> vi;
public:
    myass(){};
    myass(initializer_list<int> il):vi(il){};
    void print(){
        for(auto &v:vi){
            cout << v << endl;
        }
    }
    ~myass()=default;
};

class Foo{
public:
    Foo sorted() &&;
    Foo sorted() &;
private:
    vector<int> data;
};
Foo Foo::sorted() &&
{
    cout << "Rvalue version" << endl;
    sort(data.begin(), data.end());
    return *this;
    };
    
    //Foo Foo::sorted() &
    //{
    //    cout << "Lvalue version" << endl;
    ////    Foo ret(*this);
    ////    return ret.sorted();
    ////    return (Foo ret(*this)).sorted();
    //}
    class mystr{
    private:
        char data[100];
    public:
        mystr(){};
        mystr(const mystr&){
            cout << "Copy!" << endl;
        };
        mystr(mystr&&){
            cout << "Move!" << endl;
        };
        mystr& operator=(mystr& mys){
            
            return *this;
        };
    };
    
    template<class T>
    class pool{
    public:
        T *cell;
        size_t size = 0;
    public:
        pool(const size_t n ){
            size = n;
            cell = new T[size];
        }
        T& operator [](const size_t i) { return cell[i]; }
        T operator [](const size_t i)const { return cell[i]; }
        ~pool(){
            cout << "delete T"<< endl;
            delete[] cell;
        }
    };
    class neb{
    private:
        string name;
    public:
        typedef string str;
        neb(){};
        str* getName();
        void setName(const char* s);
        bool operator!(){
            return name.size() > 0;
        }
    };
    void neb::setName(const char* s){
        name = s;
    }
    neb::str* getName(){
        string *s = new neb::str("adf");
        return s;
    };
    
    class LongDouble{
    public:
        LongDouble(double =10.0);
        
        operator float();
        operator double();
        operator int();
    };
    
    LongDouble::operator int(){
        return 20;
    };
    
    void ccopy(){
        //    Employee e1("janko");
        //    Employee e2 = e1;
//        Foo fo;
//        fo.sorted();
//        pool<string> ts(100);
//
//        for(auto i=0;i<ts.size;++i){
//            ts[i] = to_string(i);
//        }
//
//        cout << ts[1] << endl;
//        vector<int> vi;
//        for(auto i = 0;i<2000;++i){
//            vi.push_back(i);
//        }
//        auto res = count_if(vi.begin(), vi.end(), bind2nd(greater<int>(), 1024));
//        cout << res << endl;


    };
