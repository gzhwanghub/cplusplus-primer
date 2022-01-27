/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: stonewt1.h
    >Function: revised definition for the Stonewt class
    >Created by Guozheng Wang on 2022/1/14
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_STONEWT1_H
#define CPLUSPLUS_PRIMER_STONEWT1_H


class Stonewt {
private:
    enum{ Lbs_per_stn = 14
    };                   // pounds per stone
    int stone;           // whole stones
    double pds_left;     // fractional pounds
    double pounds;       // entire weight in pounds
public:
    Stonewt(double lbs); // construct from double pounds
    Stonewt(int stn, double lbs); // construct from stone, lbs
    Stonewt();
    ~Stonewt();
    void show_lbs()const;   // show weight in pounds format
    void show_stn()const;   // show weight in stone format
    // conversion functions
    operator int()const;
    operator double()const;
};


#endif //CPLUSPLUS_PRIMER_STONEWT1_H
