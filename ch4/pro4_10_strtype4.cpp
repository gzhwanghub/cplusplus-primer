/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: strtype4.cpp
    >Function: line input
    >Created by Guozheng Wang on 2021/11/14
***************************************************************************/
#include <iostream>
#include <string>               // make string class available
#include <cstring>              // C-type string library
int main(){
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);   //indicate maximum length
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);      // cin now an argument; no length specifier
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << "strlen(charr)" << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
    cout << R"+*("(who wouldn't?)", she whispered.)+*" << endl;
    return 0;
}
