/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: acctabc.h
    >Function: bank account classes
    >Created by Guozheng Wang on 2022/2/1
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_ACCTABC_H
#define CPLUSPLUS_PRIMER_ACCTABC_H
#include <iostream>
#include <string>

// Abstract Bass Class
class AcctABC{
private:
    std::string fullName;
    long acctNum;
    double balance;
protected:
    struct Formatting{
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const std::string& FullName()const{
        return fullName;
    }
    long AcctNum() const{
        return acctNum;
    }
    Formatting SetFormat()const;
    void Restore(Formatting& f)const;
public:
    AcctABC(const std::string& s = "Nullbody", long an = -1,
            double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt) = 0;  // pure virtual function
    double Balance()const{return balance;};
    virtual void ViewAcct()const = 0;       // pure virtual function
    virtual ~AcctABC(){}
};

// Brass Account Class
class Brass: public AcctABC{
public:
    Brass(const std::string& s = "Nullbody", long an = -1,
            double bal = 0.0):AcctABC(s, an, bal){};
    virtual void Withdraw(double amt);
    virtual void ViewAcct()const;
    virtual ~Brass(){}
};

// Brass Plus Account Class
class BrassPlus:public AcctABC{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string& s = "Nullbody", long an = -1,
            double bal = 0.0, double ml = 500,
            double r = 0.10);
    BrassPlus(const Brass& ba, double ml = 500, double r = 0.1);
    virtual void ViewAcct()const;
    virtual void Withdraw(double amt);
    void ResetMax(double m){maxLoan = m;}
    void ResetRate(double r){rate = r;}
    void ResetOwes(){owesBank = 0;}
};

#endif //CPLUSPLUS_PRIMER_ACCTABC_H
