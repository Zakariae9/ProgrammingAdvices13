#include "MyQueueArr.hpp"

template<typename T>
void    clsMyQueueArr<T>::push(T Value)
{
    Arr.InsertAtEnd(Value);
}

template<typename T>
T   clsMyQueueArr<T>::GetItem(int Index)
{
    return Arr.GetItem(Index);
}

template<typename T>
void    clsMyQueueArr<T>::Reverce()
{
    Arr.Reverse();
}

// template<typename T>
// void    clsMyQueueArr<T>::UpdateItem(int Index, T NewValue)
// {
//     Arr.(Index, NewValue);
// }

template<typename T>
void    clsMyQueueArr<T>::InsertAfter(int Index, T Value)
{
    Arr.InsertAfter(Index, Value);
}

template<typename T>
clsMyQueueArr<T>::clsMyQueueArr(int Items): Arr(Items)
{
}

template<typename T>
void    clsMyQueueArr<T>::InsertAtFront(T Value)
{
    Arr.InsertAtBeginning(Value);
}

template<typename T>
void    clsMyQueueArr<T>::InsertAtBack(T Value)
{
    Arr.InsertAtEnd(Value);
}

template<typename T>
void    clsMyQueueArr<T>::Clear()
{
    Arr.Clear();
}

template<typename T>
int clsMyQueueArr<T>::Size()
{
    return Arr.Size();
}

template <typename T>
T   clsMyQueueArr<T>::fornt()
{
    return Arr.GetItem(0);
}

template<typename T>
T   clsMyQueueArr<T>::back()
{
    return Arr.GetItem(Arr.Size() - 1);
}

template<typename T>
void   clsMyQueueArr<T>::pop()
{
    Arr.DeleteFirstItem();
}

template<typename T>
void    clsMyQueueArr<T>::Print()
{
    Arr.PrintList();
}

template<typename T>
bool    clsMyQueueArr<T>::IsEmpty()
{
    return Arr.IsEmpty();
}