/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: temptempover.cpp
    >Function: template overloading
    >Created by Guozheng Wang on 2021/12/26
***************************************************************************/
#include <iostream>
template <typename T>       // template A
void ShowArray(T arr[], int n);

template <typename T>       // template B
void ShowArray(T* arr[], int n);

struct debts{
    char name[50];
    double amout;
};
int main(){
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
            {"Ima Wolfe", 2400.0},
            {"Ura Foxe", 1300.0},
            {"Iby Stout", 1800.0}
    };
    double* pd[3];
    // set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; ++i) {
        pd[i] = &mr_E[i].amout;
    }
    cout << "Listing Mr. E's counts of thins:\n";
    // things is an array of int
    ShowArray(things, 6);   // uses template A
    cout << "Listing Mr. E's debts:\n";
    // pd is an arry of pinters to double
    ShowArray(pd, 3);   // uses template B(more spcialized)
    return 0;
}
template <typename T>
void ShowArray(T arr[], int n){
    using namespace std;
    cout << "template A\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

template <typename T>
void ShowArray(T* arr[], int n){
    using namespace std;
    cout << "template B\n";
    for (int i = 0; i < n; ++i) {
        cout << *arr[i] << ' ';
    }
    cout << endl;
}

