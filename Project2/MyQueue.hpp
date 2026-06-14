#pragma once
#include <iostream>
#include "../Project1/clsDbLinkedList.hpp"
using namespace std;

template<typename T>
class   MyQueue
{
protected:
    clsDbLinedList<T>   DBL;
public:
    MyQueue();
    void    push(T Value);
    int     Size();
    T       fornt();
    T       back();
    void    pop();
    bool    IsEmpty();
    void    Print();
    T       GetItem(int Index);
    void    Reverce();
    void    UpdateItem(int Index, T NewValue);
    void    InsertAfter(int Index, T Value);
    void    InsertAtFront(T Value);
    void    InsertAtBack(T Value);
    void    Clear();
};

#include "MyQueue.tpp"