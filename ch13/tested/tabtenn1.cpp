/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: tablenn1.cpp
    >Function: simple base class methods
    >Created by Guozheng Wang on 2022/1/28
***************************************************************************/

#include "tabtenn1.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string& fn,
        const string& ln, bool ht):firstname(fn),
        lastname(ln), hasTable(ht){}
void TableTennisPlayer::Name()const{
    std::cout << lastname << ", " << firstname;
}
// RatedPlayer methods
RatedPlayer::RatedPlayer(unsigned int r, const string& fn,
        const string& ln, bool ht):TableTennisPlayer(fn, ln, ht){
    rating = r;
}
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer& tp):TableTennisPlayer(tp), rating(r){}