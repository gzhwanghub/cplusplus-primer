/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: stock20.cpp
    >Function: augmented version
    >Created by Guozheng Wang on 2022/1/1
***************************************************************************/
#include <iostream>
#include "stock20.h"

// constructors
Stock::Stock() {        // default constructor
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string& co, long n, double pr){
    company = co;
    if(n < 0){
        std::cout << "Number of shares can't be negative; "
        << company << " shares set to 0.\n";
        shares = 0;
    }else{
        shares = n;
    }
    share_val = pr;
    set_tot();
}
// class destructor
Stock::~Stock() {// quiet class destructor

}

// other methods
void Stock::buy(long num, double price){
    if(num < 0){
        std::cout << "Number of shares perchased can't be negative. "
        << "Transaction is aborted.\n";
    }else{
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price){
    using std::cout;
    if(num < 0){
        cout << "Number of shares sold can't be negtive. "
        << "Transaction is aborted.\n";
    }else if(num > shares){
        cout << "You can't sell more than you have! "
        << "Transaction is aborted.\n";
    }else{
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price) {
    share_val = price;
    set_tot();
}
void Stock::show() const {
    using std::cout;
    using std::ios_base;
    // set format to #.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Company: " << company
    << " Shares: " << shares << '\n';
    cout << " Share Price:$" << share_val;
    // set format to #.##
    cout.precision(2);
    cout << " Total Worth:$" << total_val << '\n';
    // restore original format
    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
void Stock::show(const Stcok* this){
    cout << "Company: " << this-company
    << " Shares: shares" << this->shares << '\n'
    << " Share Price:$" << this->share_val << '\n'
    << " Total Worth:$" << this->total_val << '\n'
}
const Stock& Stock::topval(const Stock &s) const {
    if(s.total_val > total_val){
        return s;
    }else{
        return *this;
    }
}