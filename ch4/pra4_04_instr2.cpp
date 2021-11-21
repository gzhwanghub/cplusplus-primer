/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: instr2.cpp
    >Function: instr2.cpp -- reading more than one word with getline
    >Created by Guozheng Wang on 2021/11/13
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for your, " << name << ".\n";
    return 0;
}

