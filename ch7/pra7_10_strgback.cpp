/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: strgback.cpp
    >Function: a function that returns a pointer to char
    >Created by Guozheng Wang on 2021/11/28
***************************************************************************/
#include <iostream>
char* buildstr(char c, int n);      // prototype
int main(){
    using namespace std;
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete []ps;                      // free memory
    ps = buildstr('+', 20);     // reuse pointer
    cout << ps << " Done " << ps << endl;
    delete []ps;                      // free momory
    return 0;
}

// builds string made of n c characters
char *buildstr(char c, int n){
    char *pstr = new char[n + 1];
    pstr[n] = '\0';             // terminate string
    while (n-- >0){
        pstr[n] = c;            // fill rest of string
    }
    return pstr;
}