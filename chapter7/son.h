//
// Created by janko.zhang on 2019-01-21.
//

#ifndef PRIMER_SON_H
#define PRIMER_SON_H


#include "father.h"

class Son: public father {
private:
    int x = 3;
    int y = 4;
public:
    Son(int &a, int &b) : father(a, b){
        cout << "Son is Borned" << endl;
    }
    static void yell(const string &s){
       cout << "You yelled:"  << s << endl;
    }
    ~Son() = default;
};


#endif //PRIMER_SON_H
