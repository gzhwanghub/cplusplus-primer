/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: swaps.cpp
    >Function: swapping with references and with pointers
    >Created by Guozheng Wang on 2021/12/5
***************************************************************************/
#include <iostream>
void swapr(int &a, int &p); // a, b are aliases for ints
void swapp(int *p, int *q); // p, q are addresses of ints
void swapv(int a, int b);   // a, b are new variables
int main(){
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2);  // pass varaibles
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using pointers to swap contents again:\n";
    swapp(&wallet1, &wallet2); // pass variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Tring to use passing by values:\n";
    swapv(wallet1, wallet2);  // pass values of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    return 0;
}

void swapr(int &a, int &b)      // use references
{
    int temp;
    temp = a;       // use a,b for values of variables
    a = b;
    b = temp;
}

void swapp(int *p, int *q){     // use pointers
    int temp;
    temp = *p;      // use *p, *q for values of variables
    *p = *q;
    *q = temp;
}

void swapv(int a, int b){       // try using values
    int temp;
    temp = a;       // use a, b for values of variables
    a = b;
    b = temp;
}