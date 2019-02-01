//
// Created by janko.zhang on 2019-01-19.
//
#include "../../header/myfun.h"
#include <typeinfo>
#include <array>
#include <string>
#include <vector>

szt find_char(const string &s, char c, szt &ocur){
    auto ret = s.size();
    return ret;
}
szt find_char(const string &s){
    auto ret = s.size();
    decltype(ret) num = 0;
    for(decltype(ret) i=0;i!=ret;++i){
        if(isupper(s[i])){
           ++num;
        }
    }
    return num;
}
void print (const int *beg, const int *end){
    while(beg != end){
        cout << *beg++<< endl;
    }
}
void print(const int (&arr)[10]){
   for(auto ele: arr){
       cout << ele << endl;
   }
}
constexpr int foo(int i){
    return i+5;
}
int Fp(int&a,int&b, char c= 'a'){
   cout << c << ":" << a << "-" << b << endl;
   return 1;
}
int fplus(int &a,int &b){
   return a+b;
}
int fminus(int &a,int &b){
    return a-b;
}
int fmultiple(int &a,int &b){
    return a*b;
}
int fdevide(int &a,int &b){
    return a/b;
}
inline void Compute(int &a,int &b, int(*p)(int&, int&)){
    cout << p(a, b) << endl;
}
void myfun(){
    int a = 1, b = 2;
    Fp(a, b);
//    decltype(fplus) *p1 = fplus, *p2 = fminus, *p3 = fmultiple, *p4 = fdevide;
//    vector<decltype(fplus)*> vf = {p1, p2, p3, p4};
//    int a = 120;
//    int b = 20;
//    for(auto ele: vf){
//        Compute(a, b, ele);
//    }

}
