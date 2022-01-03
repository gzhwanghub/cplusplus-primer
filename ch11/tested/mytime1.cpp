/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: mytime1.cpp
    >Function: implementing Time methods
    >Created by Guozheng Wang on 2022/1/3
***************************************************************************/
#include <iostream>
#include "mytime1.h"
Time::Time(){
    hours = minutes = 0;
}

Time::Time(int h, int m){
    hours = h;
    minutes = m;
}

void Time::AddHr(int h){
    hours += h;
}

void Time::Reset(int h, int m){
    hours = h;
    minutes = m;
}
Time Time::operator+(const Time& t) const{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time::Show() const{
    std::cout << hours << " hours, " << minutes << " minutes";
}