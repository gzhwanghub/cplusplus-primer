/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: num_test.cpp
    >Function: use numeric test in for loop
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i ; i--) { // quits when i is 0
        cout << "i = " << i << "\n";
    }
    cout << "Done now that i= " << i << "\n";
    return 0;
}
