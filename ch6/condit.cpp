/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: condit.cpp
    >Function: using the conditional operator
    >Created by Guozheng Wang on 2021/11/27
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "The larger of " << a << " and " << b;
    int c = a > b ? a : b;  // c = a if a > b, else c = b
    cout << " is " << c << endl;
    return 0;
}

