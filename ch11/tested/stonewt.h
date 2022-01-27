/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: stonewt.h
    >Function: definition for the Stonewt class
    >Created by Guozheng Wang on 2022/1/12
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_STONEWT_H
#define CPLUSPLUS_PRIMER_STONEWT_H
class Stonewt{
private:
    enum{Lbs_per_stn = 14}; // pounds per stone
    int stone;              // whole stones
    double pds_left;        // fractional pounds
    double pounds;          // entire weight in pounds
public:
    Stonewt(double lbs);    // constructor for double pounds
    Stonewt(int stn, double lbs);   // constructor for stone, lbs
    Stonewt();              // default constructor
    ~Stonewt();
    void show_lbs()const;   // show weight in pounds format
    void show_stn()const;   // show weight in stone format
};
#endif //CPLUSPLUS_PRIMER_STONEWT_H
