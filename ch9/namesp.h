/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: namesp.h
    >Function:
    >Created by Guozheng Wang on 2021/12/30
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_NAMESP_H
#define CPLUSPLUS_PRIMER_NAMESP_H
#include <string>
// create the pers and debts namespaces
namespace pers{
    struct Person{
        std::string fname;
        std::string lname;
    };
    void getPerson(Person&);
    void showPerson(const Person&);
}
namespace debts{
    using namespace pers;
    struct Debt{
        Person name;
        double amount;
    };
    void getDebt(Debt&);
    void showDebt(const Debt&);
    double sumDebts(const Debt ar[], int n);


}
#endif //CPLUSPLUS_PRIMER_NAMESP_H
