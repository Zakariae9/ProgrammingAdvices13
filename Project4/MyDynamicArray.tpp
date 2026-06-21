#include "MyDynamicArray.hpp"

template<typename T>
MyDynamicArray<T>::MyDynamicArray(int NumItems)
{
    if (NumItems < 0)
        NumItems = 0;
    OriginalArray = new T[NumItems];
    _size = NumItems;
}

template <typename T>
bool    MyDynamicArray<T>::SetItem(int Index, T Value)
{
    if (Index >= _size || Index < 0)
        return false;
    OriginalArray[Index] = Value;
    return true;
}

template<typename T>
bool  MyDynamicArray<T>::IsEmpty()
{
    return !Size()? true: false;
}

template<typename T>
int  MyDynamicArray<T>::Size()
{
    return _size;
}

template<typename T>
void  MyDynamicArray<T>::PrintList()
{
    for (int i = 0; i < _size; i++)
    {
        cout << OriginalArray[i] << ' ';
    }
    cout << endl;
}

template<typename T>
MyDynamicArray<T>::~MyDynamicArray()
{
    delete []OriginalArray;
}

template<typename T>
bool     MyDynamicArray<T>::Resize(int NewSize)
{
    int TempSize = 0;
    if (NewSize < 0)
        return false;
    TempArray = new T[NewSize];
    (_size > NewSize)? TempSize = NewSize: TempSize = _size;

    for (int i = 0; i < TempSize; i++)
        TempArray[i] = OriginalArray[i];
    delete [] OriginalArray;
    OriginalArray = TempArray;
    _size = NewSize;
    return true;
}

template <typename T>
bool   MyDynamicArray<T>::DeleteItem(T Value)
{
    int i = Find(Value);
    if (i == -1)
        return false;
    return DeleteItemAt(i);
}

template<typename T>
bool    MyDynamicArray<T>::InsertAt(int Index, T Value)
{
    if (Index < 0)
        return false;
    TempArray = new T[_size + 1];
    for (int i = 0; i < Index; i++)
        TempArray[i] = OriginalArray[i];
    TempArray[Index] = Value;
    for (int i = Index + 1; i < _size + 1; i++)
        TempArray[i] = OriginalArray[i - 1];
    delete []OriginalArray;
    OriginalArray = TempArray;
    _size++;
    return true;
}

template<typename T>
T   MyDynamicArray<T>::GetItem(int Index)
{
    if (Index < 0 || Index >= _size)
        return NULL;
    return OriginalArray[Index];
}

template<typename T>
void    MyDynamicArray<T>::Swap(T &V1, T &V2)
{
    T   temp = V1;
    V1 = V2;
    V2 = temp;
}

template<typename T>
void    MyDynamicArray<T>::Clear()
{
    delete [] OriginalArray;
    OriginalArray = new T[0];
    TempArray = OriginalArray;
    _size = 0;
}

template<typename T>
bool    MyDynamicArray<T>::DeleteItemAt(int Index)
{
    if (Index >= _size || Index < 0)
        return false;
    TempArray = new T[_size - 1];
    for (int i = 0; i < Index; i++)
        TempArray[i] = OriginalArray[i];
    for (int i = Index + 1; i < Size(); i++)
        TempArray[i - 1] = OriginalArray[i];
    delete[] OriginalArray;
    OriginalArray = TempArray;
    _size--;
    return true;
}

template<typename T>
bool    MyDynamicArray<T>::InsertAtEnd(T Value)
{
    return InsertAt(_size, Value);
}

template<typename T>
bool    MyDynamicArray<T>::InsertAtBeginning(T Value)
{
    return InsertAt(0, Value);
}

template<typename T>
bool    MyDynamicArray<T>::InsertAfter(int Index, T Value)
{
    if (Index >= _size)
        return InsertAt(Index - 1, Value);
    return InsertAt(Index + 1, Value);
}

template<typename T>
bool    MyDynamicArray<T>::InsertBefore(int Index, T Value)
{
    if (Index <= 0)
        return InsertAt(0, Value);
    return InsertAt(Index, Value);
}

template<typename T>
bool    MyDynamicArray<T>::DeleteFirstItem()
{
    return DeleteItemAt(0);
}


template<typename T>
bool    MyDynamicArray<T>::DeleteLastItem()
{
    return DeleteItemAt(Size() - 1);
}

template<typename T>
int MyDynamicArray<T>::Find(T Value)
{
    for (int i = 0; i < Size(); i++)
    {
        if (Value == OriginalArray[i])
            return i;
    }
    return -1;
}

template<typename T>
void   MyDynamicArray<T>::Reverse()
{
    for (int i = 0; i < _size /2; i++)
        Swap(OriginalArray[i], OriginalArray[_size - i - 1]);
}