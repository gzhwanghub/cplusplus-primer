/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: tablenn1.h
    >Function: a table tennis base class
    >Created by Guozheng Wang on 2022/1/28
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_TABLENN1_H
#define CPLUSPLUS_PRIMER_TABLENN1_H
#include <string>
using std::string;

class TableTennisPlayer {
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string& fn = "none",
            const string& ln = "none", bool ht = false);
    void Name()const;
    bool HasTable()const{return hasTable;}
    void ResetTable(bool v){hasTable = v;}
};
// simple derived class
class RatedPlayer:public TableTennisPlayer{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const string& fn = "none",
            const string& ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer& tp);
    unsigned int Rating()const{return rating;}
    void ResetRating(unsigned int r){rating = r;}
};


#endif //CPLUSPLUS_PRIMER_TABLENN1_H
