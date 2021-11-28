/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: twoarg.cpp
    >Function: a function with 2 arguments
    >Created by Guozheng Wang on 2021/11/28
***************************************************************************/
#include <iostream>
using namespace std;
void n_chars(char, int);
int main(){
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    while(ch != 'q')    // q to quit
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times); // function with two arguments
        cout << "\nEnter another character or press the"
                " q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";
    return 0;
}

void n_chars(char c, int n){    // displays c n times
    while(n-- > 0){     // continue until n reaches 0
        cout << c;
    }
}
