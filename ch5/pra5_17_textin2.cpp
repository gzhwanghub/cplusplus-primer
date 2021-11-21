/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: textin2.cpp
    >Function: using cin.get(char)
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch);        // use the cin.get(ch) function
    while (ch != '#'){
        cout << ch;
        ++count;
        cin.get(ch);    // use it again
    }
    cout << endl << count <<  " characters read\n";
    return 0;
}
