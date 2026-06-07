#pragma once
#include <iostream>

using namespace std;

template<typename T>
class   clsDbLinedList
{
public:
    class   Node
    {
    private:
        Node    *Prev;
        T       Value;
        Node    *Next;
    };
    int         Size;
    Node        *Head;
    Node        *NewNode(T Value);
public:
    clsDbLinedList();
    friend ostream  &operator<<(ostream &o, const clsDbLinedList &RHS)
    {
        Node   *Current = RHS.Head;

        o << "============================================\n";
        o << "\tSize of DBL is: " << RHS.Size << endl;
        o << "============================================\n";
        while (Current != nullptr)
        {
            o << Current->Prev << "<=" << Current->Value << "=>" << Current->Next << endl;
            Current = Current->Next;
        }
        return o;
    }

    void    InstertAtBeginning(T Value);
    void    InsertAfer(Node *N, T Value);
    Node    *Find(T Value);
    void    DeleteNode(Node *N);
    void    DeleteFirstNode();
    void    PrintList();
};



#include "clsDbLinkedList.tpp"
// i use .tpp because the the templates are used in preprocessing so when i use .cpp, during linking can't link them becaue they separated