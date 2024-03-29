/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: stock00.cpp
    >Function: implementing the Stock class
    >Created by Guozheng Wang on 2022/1/1
***************************************************************************/
#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string& co, long n, double pr){
    company = co;
    if(n < 0){
        std::cout << "Number of shares can't be negative;"
        << company << " shares set to 0.\n";
        shares = 0;
    }else
        shares = n;
    share_val = pr;
    set_tot();
}
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
    if(num < 0)
    {
        cout << "Number of shares perchased can't be negative. "
             << "Transacton is aborted.\n";
    }else if(num > shares){
        cout << "You can't sell more than you have! "
        << "Transaction is abortd.\n";
    }else{
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price){
    share_val = price;
    set_tot();
}
void Stock::show(){
    std::cout <<"Company: " << company
    << " Shares: " << shares << '\n'
    << " Share Price: $" << share_val
    << " Total Worth: $" << total_val << '\n';
}