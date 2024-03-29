/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: mixtypes.cpp
    >Function: some type combination
    >Created by Guozheng Wang on 2021/11/14
***************************************************************************/
#include <iostream>
struct antarctica_years_end{
    int year;
};
int main(){
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end *pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3]; // array of 3 structures
    trio[0].year = 2003;
    std::cout << trio->year << std::endl;
    const antarctica_years_end *arp[3] = {&s01, &s02, &s03};
    std::cout << arp[1]->year << std::endl;
    const antarctica_years_end **ppa = arp;
    auto ppb = arp; // C++11 automatic type deduction
    // or else use const antarctica_years_end **ppb = arp;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb+1))->year << std::endl;
    return 0;
}
