/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: numstr.cpp
    >Function: numstr.cpp -- following number input with line input
    >Created by Guozheng Wang on 2021/11/14
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    cout << "What year was your house build?\n";
    int year;
    (cin >> year).get(); //object recall method
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address,80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}
