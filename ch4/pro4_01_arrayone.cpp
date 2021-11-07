/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: ch4.cpp
    >Function: arrayone.cpp -- small arrays of integers
    >Created by Guozheng Wang on 2021/11/7
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    int yams[3];  // creats array with three elements
    yams[0] = 7;  // assign value to first element
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; // create initialize array
    //NOTE: If your C++ compiler or translator can't initialize
    //this array, use static int yamcosts[3] instead of
    // int yamcosts[3]

    cout << "Total yams = ";
    cout << "yams[0] + yams[1] + yams[2]" << endl;

}

