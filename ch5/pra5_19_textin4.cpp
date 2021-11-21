/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: textin4.cpp
    >Function: reading chars with cin.get()
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
int main(void){
    using namespace std;
    int ch;                 // should be int, not char
    int count = 0;
    while((ch = cin.get()) != EOF){ // test for end-of-file
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << "characters read\n";
    return 0;

}
