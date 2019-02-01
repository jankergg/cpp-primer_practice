//
// Created by janko.zhang on 2019-01-21.
//

#include "../../header/myClass.h"
#include "son.h"
#include <random>
#include <ctime>
string &read(istream &is, string &s){
   is >> s;
   return s;
}
struct Point{
    int x;
    int y;
    int z;
};
int reverse(int x) {
    if(x>-10 && x<10) { return x;};
    string s = std::to_string( x>0 ?x :-x);
    auto sz = s.size();
    cout << "sz:" << sz << endl;
    auto i = sz/2;
    char sw = ' ';
    while(i){
        cout << "i:" << i << endl;
        sw = s[i-1];
        s[i-1] = s[sz-i];
        s[sz-i] = sw;
        --i;
    }
    if(x<0){
        s = "-" + s;
    }
    try {
        return std::stoi(s);
    } catch (out_of_range &e){
       cout << e.what() << endl;
       return 0;
    }
};
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    auto sz1 = nums1.size();
    auto sz2 = nums2.size();
    double av = 0;
    for(int i=0;i<std::max(sz1, sz2); ++i){
        if(i<sz1){
            av+=nums1[i];
        }
        if(i<sz2){
            av+=nums2[i];
        }
    }
    return av/(sz1+sz2);
}
void myClass() {
    vector<int> v1 = {1,2,3,4,6,1246,2136,3634};
    vector<int> v2 = {31,42,53,64,76,8246,9136,13634};
    cout << "hello" << endl;
}

