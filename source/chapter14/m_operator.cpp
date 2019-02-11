//
//  m_operator.cpp
//  learncpp
//
//  Created by janko.zhang on 2/7/19.
//  Copyright © 2019 janko.zhang. All rights reserved.
//

#include "../../header/m_operator.hpp"
#include <set>
#include <vector>
struct LangDouble;
// type operator overload
class SmallInt{
private:
    int data = 0;
public:
    SmallInt(){
        cout << "default: double" << endl;
    };
    SmallInt(const int& v):data(v) {
        cout << "init int " << endl;
    };
    SmallInt(const SmallInt&){
        cout << "copy!: " << data << endl;
    };
    SmallInt& operator=(const SmallInt& si);

    SmallInt(SmallInt&& si){
        cout << "move!: " << data << endl;
        cout << "move!: " << si.data << endl;
        data = si.data;
        si = 0;
    };
    SmallInt& operator=(const SmallInt&& si);

    operator int();
    operator float();
    operator double();

    friend SmallInt operator+(const SmallInt&, const double&);
    friend SmallInt operator+(const SmallInt&, const int&);
};
SmallInt& SmallInt::operator=(const SmallInt& si){
    cout << "copy: " << data << "other: " << si.data << endl;
    data = si.data;
    cout << "copy: " << data << "other: " << si.data << endl;
    return *this;
}
SmallInt& SmallInt::operator=(const SmallInt&& si){
    cout << "move: " << data << "other: " << si.data << endl;
    data = si.data;
    cout << "move: " << data << "other: " << si.data << endl;
    return *this;
}
SmallInt::operator int(){
    return int(data);
};
SmallInt::operator float(){
    return float(data);
};
SmallInt::operator double(){
    return double(data);
};
SmallInt operator+(const SmallInt &si, const double &db){
    cout << "+ double " << db << endl;
    SmallInt _si;
    _si.data = si.data;
    cout << "data" << _si.data << endl;
    _si.data = _si.data + db;
    cout << "data" << _si.data << endl;
    return _si;
};

SmallInt operator+(const SmallInt &si, const int &db){
    cout << "+ int " << db << endl;
    SmallInt _si = si;
    _si.data = _si.data + db;
    return _si;
};
//=================================================

class loodb{
private:
    int data = 0;
public:
    loodb(){};
    loodb(const int &i):data(i){};
    operator int();
    operator SmallInt();

    void setData(const int &i){
        data = i;
    }
};
loodb::operator int(){
    cout << "convert to : int" << endl;
    return data;
};
loodb::operator SmallInt(){
    cout << "convert to : SmallInt" << endl;
    return SmallInt(data);
};


void p_14_52(){
    SmallInt si;
//    int a = si;
    loodb ld(200);
    int d = ld;
    si = ld;
    int a = si;
    cout << "ld: " << d << endl;
    cout << "si: " << a << endl;
    //    ld = ld + si;
    //    int b = ld;
    //    cout << b << endl;
};

    class subA:public A{
    public:
        subA(){};
        void foo() override {
            cout << "subA foo" << endl;
        }
        void bar() {
            cout << "subA bar" << endl;
        }
        void myPro(){
            cout << "myPro:" << endl;
            this->pro();
        };
    };
//--------------------------------------------------------
    struct base{
    private:
        string basename;
    public:
        base(string szNum):basename(szNum) { };
        string name(){
            return basename;
        };
        virtual void print(ostream &os){
            os << basename << endl;
        }
    };

    struct derived: base{
    private:
        int nem;
    public:
        derived(string szname, int ival): base(szname), nem(ival){}
        void print(ostream &os){
            base::print(os);
            os << "---" << nem <<endl;
        }
    };

    void p_15_50(){
        SmallInt si = SmallInt(3);
        int a = si;
        float b = si;
        double d = si;
        cout << a << "," << b << "," << d << endl;

        SmallInt s1(100);
        double db = s1 + 3.0;
        SmallInt s2 = move(s1);
        double s3 = s2;
        //    double s3 = s2;
        cout << "s2: " << s3<< endl;
        cout << "db: " << db << endl;
    }

    void p_15_53(){
        A *s =  new subA();
        subA sa;
        A aa;
        subA sb;
        aa = sa;
        sb = sa;
        s->foo();
        aa.foo();
        sb.foo();

        s->bar();
        aa.bar();
        sb.bar();
        sb.myPro();

        delete s;
        derived dr("janko", 3);
        dr.print(cout);
    }

    class Quote {
    public:
        Quote() = default;  // = default see § 7.1.4 (p. 264)
        Quote(const std::string &book, double sales_price): bookNo(book), price(sales_price) { }
        std::string isbn() const { return bookNo; }
        virtual double net_price(std::size_t n) const
        { return n * price; }
        virtual ~Quote() = default; // dynamic binding for the destructor
    private:
        std::string bookNo; // ISBN number of this item
    protected:
        double price = 0.0; // normal, undiscounted price
    };

    class Bulk_Quote: public Quote{
        Bulk_Quote() = default;
//        Bulk_Quote(const string& name, double price, size_t qty, double sprice);
        double net_price(size_t) const override;
    private:
        size_t min_qty = 0;
        double discount = 0.0;
    };
    double Bulk_Quote::net_price(size_t sz) const {
        return sz * price;
    };

    class Basket{
    public:
        void add_item(shared_ptr<Quote> &sale){
//            item.insert(sale);
        }
        double total_receipt(ostream &os) const {
            double p = 0.0;
            os << p << endl;
            return p;
        }

    private:
//        static bool compare(shared_ptr<Quote> &lhs, shared_ptr<Quote> &rhs){
//            return lhs->isbn() < rhs->isbn();
//        };
//        multiset<shared_ptr<Quote>, decltype(compare)*> item{compare};
    };

    void p_15_55(){
//        Basket bsk;
//        for(int i=0;i<50;++i){
////            shared_ptr<Quote> sbq = make_shared<Quote>("C++ Primer", 45+i);
////            bsk.add_item(sbq);
//        }
//        pair<int, string> pis;
//        pis.first = 1;
//        pis.second = "jak";
    }

    void m_operator(){
        cout << "welcome to chapter 15" << endl;
        //    p_14_52();
        p_15_55();
    };
