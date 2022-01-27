/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: strngbad.h
    >Function: flawed string class definition
    >Created by Guozheng Wang on 2022/1/14
***************************************************************************/
#include <iostream>
#ifndef CPLUSPLUS_PRIMER_STRNGBAD_H
#define CPLUSPLUS_PRIMER_STRNGBAD_H
class StringBad{
private:
    char* str;      // pointer to string
    int len;        // length of string
    static int num_strings; // number of objects
public:
    StringBad(const char* s);   // constructor
    StringBad();                // default constructor
    ~StringBad();               // destructor
    // friend function
    friend std::ostream& operator<<(std::ostream& os, const StringBad& st);
};
#endif //CPLUSPLUS_PRIMER_STRNGBAD_H
