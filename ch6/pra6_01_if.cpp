/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: if.cpp
    >Function: using the if statement
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
int main(){
    using std::cin;  // using declarations
    using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.'){ // quit at end of sentence
        if(ch == ' ')  // check if ch is a space
            ++spaces;
        ++total;
        cin.get(ch);
    }
    cout << spaces << "spaces, " << total;
    cout << " characters total in sentence\n";
}
