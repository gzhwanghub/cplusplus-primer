/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: secref.cpp
    >Function: defining and using a reference
    >Created by Guozheng Wang on 2021/12/5
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    int rats = 101;
    int &rodents = rats; // rodents is reference

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    int bunnies = 50;
    rodents = bunnies;  // can we change the reference?
    cout << "bunnies" << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "bunnies address = " << &bunnies;
    cout << ", rodents address = " << &rodents << endl;
    return 0;
}
