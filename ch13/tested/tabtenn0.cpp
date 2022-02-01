/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: tabtenn0.cpp
    >Function: simple base class methods
    >Created by Guozheng Wang on 2022/1/27
***************************************************************************/
#include "tabtenn0.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string& fn,
        const string& ln, bool ht):firstname(fn),
        lastname(ln), hasTable(ht){}
void TableTennisPlayer::Name()const{
    std::cout << lastname << ", " << firstname;
}
