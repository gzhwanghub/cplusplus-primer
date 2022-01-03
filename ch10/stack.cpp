/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: stack.cpp
    >Function: 
    >Created by Guozheng Wang on 2022/1/3
***************************************************************************/

#include "stack.h"
Stack::Stack(){     // create an empty stack
    top = 0;
}
bool Stack::isempty() const{
    return top == 0;
}
bool Stack::isfull() const{
    return top == MAX;
}
bool Stack::push(const Item& item){
    if(top < MAX){
        items[top++] = item;
        return true;
    }else{
        return false;
    }
}
bool Stack::pop(Item& item){
    if(top > 0){
        item = items[--top];
        return true;
    }else
        return false;
}