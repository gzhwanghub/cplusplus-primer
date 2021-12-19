/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: cubes.cpp
    >Function: regular and reference arguments
    >Created by Guozheng Wang on 2021/12/5
***************************************************************************/
#include <iostream>
double cube(double a);
double refcube(double &ra);
int main(){
    using namespace std;
    double x = 3.0;
    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refcube(x);
    cout << " = cube of " << x << endl;
    return 0;
}
double cube(double a){
    a *= a * a;
    return a;
}

double refcube(double &ra){
    ra *= ra * ra;
    return ra;
}
