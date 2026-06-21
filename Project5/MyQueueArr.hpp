#pragma once
#include "../Project4/MyDynamicArray.hpp"

template<typename T>
class   clsMyQueueArr
{
protected:
    MyDynamicArray<T>   Arr;
public:
    clsMyQueueArr(int Items);
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

#include "MyQueueArr.tpp"