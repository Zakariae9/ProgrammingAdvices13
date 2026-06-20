#include "clsMyStack.hpp"

template<typename T>
void    clsMyStack<T>::push(T Value)
{
    this->InsertAtFront(Value);
}


template <typename T>
T   clsMyStack<T>::Top()
{
    return this->GetItem(this->Size() -1);
}

template<typename T>
T   clsMyStack<T>::Bottom()
{
    return this->GetItem(0);
}

template<typename T>
void   clsMyStack<T>::pop()
{
    MyQueue<T>::pop();
}
