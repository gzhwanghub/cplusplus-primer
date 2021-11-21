/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: pro3_12_modulus.cpp
    >Function: modulus.cpp -- uses % operator to convert lbs to stone
    >Created by Guozheng Wang on 2021/11/7
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    const int lbs_per_stone = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / lbs_per_stone;
    int pounds = lbs % lbs_per_stone;
    cout << lbs << "pounds are " << stone << " stone " << pounds << "pound(s). \n";
    return 0;
}
