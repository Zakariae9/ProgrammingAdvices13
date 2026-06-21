#pragma once 
#include "../Project4/MyDynamicArray.hpp"

template<typename T>
class   clsMyStackArr: public MyDynamicArray<T>
{
public:
    clsMyStackArr();
    void    push(T Value);
    T       Top();
    T       Bottom();
    void    pop();
};


#include "MyStackArr.tpp"