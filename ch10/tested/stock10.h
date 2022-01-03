/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: stock10.h
    >Function: Stock class declaration with constructors, destructor added
    >Created by Guozheng Wang on 2022/1/1
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_STOCK10_H
#define CPLUSPLUS_PRIMER_STOCK10_H
#include <string>

class Stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){
        total_val = shares * share_val;
    }
public:
    // two-constructors
    Stock();        // default constructor
    Stock(const std::string& co, long n = 0, double pr = 0.0);
    ~Stock();       // noisy destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};


#endif //CPLUSPLUS_PRIMER_STOCK10_H
