/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: forstr1.cpp
    >Function: using for with a string
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
#include <string>
int main(){
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // display letters in reverse order
    for (int i = word.size() - 1; i >=0 ; i--) {
        cout << word[i];
    }
    cout << "\nBye.\n";
}
