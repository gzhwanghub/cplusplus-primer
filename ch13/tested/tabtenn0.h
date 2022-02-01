/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: tabtenn0.h
    >Function: a table tennis base class
    >Created by Guozheng Wang on 2022/1/27
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_TABTENN0_H
#define CPLUSPLUS_PRIMER_TABTENN0_H
#include <string>
using std::string;
// simple base class
class TableTennisPlayer{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string& fn = "none",
            const string& ln = "none",
            bool ht = false);
    void Name()const;
    bool HasTable() const{
        return hasTable;
    }
    void ResetTable(bool v){
        hasTable = v;
    }
};
#endif //CPLUSPLUS_PRIMER_TABTENN0_H
