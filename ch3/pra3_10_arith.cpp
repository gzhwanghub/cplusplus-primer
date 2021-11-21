/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: pro3_10_arith.cpp
    >Function: arith.cpp -- some C++ arithmetic
    >Created by Guozheng Wang on 2021/11/7
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield); //fixed-point
    cout << "Enter a number";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0;
}

