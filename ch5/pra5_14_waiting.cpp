/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: waiting.cpp
    >Function: using clock() function, clock_k type
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
#include <ctime> // describes clock() function, clock_t type
int main(){
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC; // convert to clock tricks
    cout << "starting\a\n";
    clock_t start = clock();
    while(clock() - start < delay)  // wait until time elapse
        ;                           // note the semicolon
    cout << "done \a\n";
    return 0;
}

