/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: usett0.cpp
    >Function: using a base class
    >Created by Guozheng Wang on 2022/1/27
***************************************************************************/
#include <iostream>
#include "tabtenn0.h"
int main(void){
    using std::cout;
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();
    if(player1.HasTable()){
        cout << ": has a table.\n";
    }else{
        cout << ": hasn't a table.\n";
    }
    player2.Name();
    if(player2.HasTable()){
        cout << ": has a table";
    }else{
        cout << ": hasn't a table.\n";
    }
    return 0;
}
