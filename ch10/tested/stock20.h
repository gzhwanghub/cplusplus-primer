/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: stock20.h
    >Function: augmented version
    >Created by Guozheng Wang on 2022/1/1
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_STOCK20_H
#define CPLUSPLUS_PRIMER_STOCK20_H


class Stock {
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot(){
        total_val = shares * share_val;
    }

public:
    Stock();    // default constructor
    Stock(const std::string& co, long n = 0, double pr = 0.0);
    ~Stock();   // do-nothing destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show()const;
    void show(const Stack* this);
    const Stock& topval(const Stock& s)const;
};


#endif //CPLUSPLUS_PRIMER_STOCK20_H
