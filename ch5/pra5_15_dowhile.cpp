/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: dowhile.cpp
    >Function: exit-condition-loop
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    int n;
    cout << "Enter numbers in the range 1-10 to fine ";
    cout << "my favorite number\n";
    do{
        cin >> n;       // execute body
    }while(n != 7);     // then test
    cout << "Yes, 7 is my favorite.\n";
    return 0;
}
