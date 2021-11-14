/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: instr1.cpp
    >Function: instr1.cpp -- reading more than one string
    >Created by Guozheng Wang on 2021/11/13
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have soem delicious " << dessert;
    cout <<" for you. " << name << " \n";
    return 0;
}
