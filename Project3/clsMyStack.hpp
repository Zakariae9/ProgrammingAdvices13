#pragma once 
#include "../Project2/MyQueue.hpp"

template<typename T>
class   clsMyStack: public MyQueue<T>
{
public:
    void    push(T Value);
    T       Top();
    T       Bottom();
    void    pop();
};


#include "clsMyStack.tpp"