#include "MyStackArr.hpp"

template<typename T>
void    clsMyStackArr<T>::push(T Value)
{
    this->InsertAtEnd(Value);
}

template<typename T>
clsMyStackArr<T>::clsMyStackArr(): MyDynamicArray<T>::MyDynamicArray(0)
{}


template <typename T>
T   clsMyStackArr<T>::Top()
{
    return this->GetItem(this->Size() -1);
}

template<typename T>
T   clsMyStackArr<T>::Bottom()
{
    return this->GetItem(0);
}

template<typename T>
void   clsMyStackArr<T>::pop()
{
    this->DeleteLastItem();
}
