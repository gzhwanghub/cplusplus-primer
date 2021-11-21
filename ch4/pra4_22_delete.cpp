/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: delete.cpp
    >Function: using the delete oprator
    >Created by Guozheng Wang on 2021/11/14
***************************************************************************/
#include <iostream>
#include <cstring>    //or string.h
using namespace std;
char *getname(void);  // function prototype
int main(){
    char *name;       // ctreat pointer but no storage

    name = getname(); //assign-address of string to name
    cout << name << " at " << (int *) name << "\n";
    delete []name;    // momory freed again
    return 0;
}

char *getname(){            // return pointer to new string
    char temp[80];          // temporary storage
    cout << "Enter last name: ";
    cin >> temp;
    char *pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);       // copy string into smaller space

    return pn;              // temp lost when function ends
}
