/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: compstr.cpp
    >Function: comparing strings using arrays
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
#include <cstring>      //prototype for strcmp()
int main(){
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate") ; ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
}

