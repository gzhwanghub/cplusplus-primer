/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: compstr2.cpp
    >Function: comparing strings using arrays
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
#include <string> // string class
int main(){
    using namespace std;
    string word = "?ate";
    for(char ch = 'a'; word != "mate"; ch++){
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}

