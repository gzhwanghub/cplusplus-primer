/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: instr3.cpp
    >Function: instr3.cpp -- reading more one word with get() & get()
    >Created by Guozheng Wang on 2021/11/13
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    cout << "Enter your name:\n";
    cin.get(name, ArSize).get(); // read string, newline
    cout << " Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
