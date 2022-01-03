/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: stack.h
    >Function: class definition for the stack ADT
    >Created by Guozheng Wang on 2022/1/3
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_STACK_H
#define CPLUSPLUS_PRIMER_STACK_H

typedef unsigned long Item;
class Stack {
private:
    enum {MAX = 10};    // constant specific to class
    Item items[MAX];   // holds stack items
    int top;            // index for top stack item
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item& item);        // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item& item);               // pop top into item
};


#endif //CPLUSPLUS_PRIMER_STACK_H
