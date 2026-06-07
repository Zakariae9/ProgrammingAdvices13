#include "clsDbLinkedList.hpp"

template<typename T>
clsDbLinedList<T>::clsDbLinedList()
{
    Size = 0;
    Head = NULL;
}
template <typename T>
typename clsDbLinedList<T>::Node*  clsDbLinedList<T>::NewNode(T Value)
{
    Node*   node = new Node();

    node->Prev = nullptr;
    node->Value = Value;
    node->Next = nullptr;
    return node;
}

template <typename T>
void    clsDbLinedList<T>::InstertAtBeginning(T Value)
{
    Node *N = NewNode(Value);
    
    if (!Size)
    {
        Size++;
        this->Head = N;
        return;
    }
    N->Next = Head;
    Head->Prev = N;
    Head = N;
    Size++;
}

template<typename T>
void    clsDbLinedList<T>::InsertAfer(Node *N, T Value)
{
    Node    *New = NewNode(Value);

    New->Prev = N;
    New->Next = N.Next;
    N.Next = N;
}

template<typename T>
typename clsDbLinedList<T>::Node    *clsDbLinedList<T>::Find(T Value)
{
    Node    *Current = Head;
    while (Current != nullptr)
    {
        if (Current->Value == Value)
            return Current;
        Current = Current->Next;
    }
    return nullptr;
}

template<typename T>
void    clsDbLinedList<T>::DeleteNode(Node *N)
{
    if (Find(N->Value) == nullptr)
    {
        cout << "This Node doen't exist\n";
        return ;
    }
    if (Size == 1)
    {
        delete N;
        Head = nullptr;
        return ;
    }
    N->Prev->Next = N->Next;
    N->Next->Prev = N->Prev;
    delete N;
}


