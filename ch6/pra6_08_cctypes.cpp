/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: cctypes.cpp
    >Function: using the cctype.h library
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
#include <cctype>       // prototypes for character functions
int main(){
    using namespace std;
    cout << "Enter text for analysis, and type "
            " to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);       // get first character
    while(ch != '@'){
        if(isalpha(ch))     // is it an-alphabetic character?
            chars++;
        else if(isspace(ch)) // is it a whitespace character?
            whitespace++;
        else if(isdigit(ch)) // is it a digit?
            digits++;
        else if(ispunct(ch)) // is it a punctuation?
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << "letters, "
    << whitespace << " whitespace, "
    << digits << " digits, "
    << punct << " punctuations, "
    << others << " others.\n";
    return 0;

}

