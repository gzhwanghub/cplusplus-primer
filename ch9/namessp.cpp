/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: namessp.cpp
    >Function: using namespaces
    >Created by Guozheng Wang on 2021/12/30
***************************************************************************/
#include <iostream>
#include "namesp.h"
void other(void);
void another(void);
int main(){
    using debts::Debt;
    using debts::showDebt;
    Debt golf = {{"Benny", "Goatsniff"}, 120.0};
    showDebt(golf);
    other();
    another();
    return 0;
}

void other(void){
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg = {"Doodels","Glister"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    int i;
    for (int j = 0; j < 3; ++j) {
        getDebt(zippy[i]);
    }
    for (int i = 0; i < 3; ++i) {
        showDebt(zippy[i]);
    }
    cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
    return;
}
void another(void){
    using pers::Person;
    Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector);
    std::cout << std::endl;
}
