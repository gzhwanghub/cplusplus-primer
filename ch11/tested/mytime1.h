/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: mytime1.h
    >Function: Time class before operator overloading
    >Created by Guozheng Wang on 2022/1/3
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_MYTIME1_H
#define CPLUSPLUS_PRIMER_MYTIME1_H


class Time {
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int b = 0, int m = 0);
    Time operator+(const Time& t) const;
    void Show() const;
};


#endif //CPLUSPLUS_PRIMER_MYTIME1_H
