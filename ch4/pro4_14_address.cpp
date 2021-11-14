/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: address.cpp
    >Function: using the & oprator to find addresses
    >Created by Guozheng Wang on 2021/11/14
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
    //NOTE: you may need to use unsigned (&donuts)
    // and unsigned (&cups)
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    return 0;
}
