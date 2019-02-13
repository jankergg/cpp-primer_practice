//
//  m_operator.hpp
//  learncpp
//
//  Created by janko.zhang on 2/7/19.
//  Copyright © 2019 janko.zhang. All rights reserved.
//

#ifndef m_operator_hpp
#define m_operator_hpp

#include "common.h"
class A{
private:
    int data;
public:
    A(){};
    void bar(){
        cout << "A bar" << endl;
    };
    virtual void foo(){
        cout << "A foo" << endl;
    };
    virtual ~A(){};
protected:
    void pro(){
        cout << "i'm the pro" << endl;
    }
};

void m_operator();
#endif /* m_operator_hpp */
