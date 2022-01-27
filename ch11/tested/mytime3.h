/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: mytime3.h
    >Function: Time class with friends
    >Created by Guozheng Wang on 2022/1/9
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_MYTIME3_H
#define CPLUSPLUS_PRIMER_MYTIME3_H

#include <iostream>
class Time {
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time& t) const;
    Time operator-(const Time& t) const;
    Time operator*(double n) const;
    friend Time operator*(double m, const Time& t){
        return t*m;         // inline definition
    }
    friend std::ostream& operator<< (std::ostream& os, const Time& t);

};


#endif //CPLUSPLUS_PRIMER_MYTIME3_H
