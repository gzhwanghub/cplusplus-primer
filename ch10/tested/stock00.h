/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: stock00.h
    >Function: Stock class interface
    >Created by Guozheng Wang on 2022/1/1
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_STOCK00_H
#define CPLUSPLUS_PRIMER_STOCK00_H
#include <string>

class Stock {     // class declaration
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){
        total_val = shares * share_val;
    }
public:
    void acquire(const std::string& co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};  // note semicolon at the ends


#endif //CPLUSPLUS_PRIMER_STOCK00_H
