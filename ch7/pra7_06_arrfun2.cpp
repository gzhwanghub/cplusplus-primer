/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: arrfun2.cpp
    >Function: functions with an array argument
    >Created by Guozheng Wang on 2021/11/28
***************************************************************************/
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
// use std:: instead of using directive
int main(){
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    // some systems require preceding int with static to
    // enable array initialization
    std::cout << cookies << " = array address, ";
    // some systems require a type cast: unsignd (cookies)
    std::cout << sizeof cookies << " sizeof cookies\n";
    int sum = sum_arr(cookies, ArSize);
    std:: cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, 3);   // a lie
    std::cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, 4);  // another lie
    std::cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;

}
// return the sum of an integer array
int sum_arr(int arr[], int n){
    int total = 0;
    std:: cout << arr << " = arr, ";
    // some systems require a type cast: unsigned (arr)
    std::cout << sizeof arr << " = sizeof arr\n";
    for (int i = 0; i < n; ++i) {
        total = total + arr[i];
    }
    return total;
}
