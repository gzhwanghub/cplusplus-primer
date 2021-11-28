/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: topfive.cpp
    >Function: handing an array of string objects
    >Created by Guozheng Wang on 2021/11/28
***************************************************************************/
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);
int main(){
    string list[SIZE];      // an array holding 5 string object
    cout << "Enter your "  << SIZE << " favorite astronomical sights:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << i+1 << ": ";
        getline(cin, list[i]);
    }
    cout << "Your list:\n";
    display(list,SIZE);
    return 0;
}
void display(const string sa[], int n){
    for (int i = 0; i < n; ++i) {
        cout << i+1 << ": " << sa[i] << endl;
    }
}
