#pragma once
#include <iostream>

using namespace std;
template<typename T>
class   MyDynamicArray
{
protected:
    T   *TempArray;
    int _size;
    void    Swap(T &V1, T &V2);
public:
    T   *OriginalArray;
    MyDynamicArray(int NumItems);
    ~MyDynamicArray();
    bool    SetItem(int Index, T Value);
    bool    IsEmpty();
    int     Size();
    void    PrintList();
    bool    Resize(int NewSize);
    T       GetItem(int Index);
    void    Clear();
    void    Reverse();
    bool    DeleteItemAt(int Index);
    bool    DeleteFirstItem();
    bool    DeleteLastItem();
    bool    DeleteItem(T Value);
    int     Find(T Value);
    bool    InsertAt(int Index, T Value);
    bool    InsertAtBeginning(T Value);
    bool    InsertAtEnd(T Value);
    bool    InsertBefore(int Index, T Value);
    bool    InsertAfter(int Index, T Value);

};

#include "MyDynamicArray.tpp"