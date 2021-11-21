/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: forstr2.cpp
    >Function: reversing an array
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
#include <string>
int main(){
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // physically modify string object
    char temp;
    int i, j;
    for(j = 0, i = word.size() - 1; j < i; --i, ++j){
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDone\n";
    return 0;
}
