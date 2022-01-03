/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: static.cpp
    >Function: using a static local variable
    >Created by Guozheng Wang on 2021/12/28
***************************************************************************/
#include <iostream>
const int kArSize = 10;
void strcount(const char* str);
int main(){
    using namespace std;
    char input[kArSize];
    char next;
    cout << "Enter a line:\n";
    cin.get(input, kArSize);
    while(cin){
        cin.get(next);
        while(next != '\n') // string didn't fit;
            cin.get(next);      // dispose of remainder
        strcount(input);
        cout <<"Enter next line (empty line to quit):\n";
        cin.get(input, kArSize);
    }
    cout << "Bye\n";
    return 0;
}
void strcount(const char* str){
    using namespace std;
    static int total = 0;       // static local variable
    int count = 0;              // automatic local variable

    cout << "\"" << str << "\" contains ";
    while(*str++){              // go to end of string
        count++;
    }
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";

}
