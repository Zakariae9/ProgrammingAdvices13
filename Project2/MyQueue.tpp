#include "MyQueue.hpp"
template<typename T>
MyQueue<T>::MyQueue()
{
}


template<typename T>
void    MyQueue<T>::push(T Value)
{
    DBL.InsertAtEnd(Value);
}

template<typename T>
T   MyQueue<T>::GetItem(int Index)
{
    return DBL.GetItem(Index);
}

template<typename T>
void    MyQueue<T>::Reverce()
{
    DBL.Reverce();
}

template<typename T>
void    MyQueue<T>::UpdateItem(int Index, T NewValue)
{
    DBL.UpdateItem(Index, NewValue);
}

template<typename T>
void    MyQueue<T>::InsertAfter(int Index, T Value)
{
    DBL.InsertAfter(Index, Value);
}

template<typename T>
void    MyQueue<T>::InsertAtFront(T Value)
{
    DBL.InstertAtBeginning(Value);
}

template<typename T>
void    MyQueue<T>::InsertAtBack(T Value)
{
    DBL.InsertAtEnd(Value);
}

template<typename T>
void    MyQueue<T>::Clear()
{
    DBL.Clear();
}

template<typename T>
int MyQueue<T>::Size()
{
    return DBL.Size();
}

template <typename T>
T   MyQueue<T>::fornt()
{
    return DBL.GetItem(0);
}

template<typename T>
T   MyQueue<T>::back()
{
    return DBL.GetItem(DBL.Size() - 1);
}

template<typename T>
void   MyQueue<T>::pop()
{
    DBL.DeleteFirstNode();
}

template<typename T>
void    MyQueue<T>::Print()
{
    cout << DBL << endl;
}

template<typename T>
bool    MyQueue<T>::IsEmpty()
{
    return DBL.IsEmpty();
}