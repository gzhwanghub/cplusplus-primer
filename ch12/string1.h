/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: string1.h
    >Function: fixed and augmented string class definition
    >Created by Guozheng Wang on 2022/1/21
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_STRING1_H
#define CPLUSPLUS_PRIMER_STRING1_H
#include <iostream>
using std::ostream;
using std::istream;

class String {
private:
    char* str;          // pointer to string
    int len;            // length of string
    static int num_strings;      // number of objects
    static const int CINLIM = 80;   // cin input limit
public:
    // constructors and other methods
    String(const char* s);      // constructor
    String();                   // defualt constructor
    String(const String&);      // copy constructor
    ~String();                  // destructor
    int length()const{return len;}
    // overloaded operator methods
    String& operator=(const String&);
    String& operator=(const char*);
    char& operator[](int i);
    const char& operator[](int i )const;
    // overloaded operator friends
    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend ostream& operator<<(ostream& os, const String& st);
    friend istream& operator>>(istream& is, String& st);
    // static function
    static int HowMany();
};
#endif //CPLUSPLUS_PRIMER_STRING1_H
