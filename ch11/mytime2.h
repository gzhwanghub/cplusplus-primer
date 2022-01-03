/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: mytime2.h
    >Function: Time class after operator overloading
    >Created by Guozheng Wang on 2022/1/3
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_MYTIME2_H
#define CPLUSPLUS_PRIMER_MYTIME2_H


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
    void Show() const;
};


#endif //CPLUSPLUS_PRIMER_MYTIME2_H
