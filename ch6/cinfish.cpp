/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: cinfish.cpp
    >Function: non-numeric input terminates loop
    >Created by Guozheng Wang on 2021/11/27
***************************************************************************/
#include <iostream>
const int Max = 5;
int main(){
    using namespace std;
    // get data
    double fish[Max];
    cout << "Please enter the wights of your fish.\n";
    cout << "You may enter up to " << Max
    << " fish <q to terminate>.\n";
    cout << "fish #1: ";
    int i = 0;
    while(i < Max && cin >> fish[i]){
        if(++i < Max)
            cout << "fish #" << i+1 << ": ";
    }
    // calculate average
    double total = 0.0;
    for (int j = 0; j < i; ++j) {
        total += fish[j];
    }
    // report results
    if( i== 0){
        cout << "No fish\n";
    }else{
        cout << total / i << " = average weight of "
        << i << " fish\n";
    }
    cout << "Done.\n";
    return 0;
}
