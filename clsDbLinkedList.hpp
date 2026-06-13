#pragma once
#include <iostream>

using namespace std;

template<typename T>
class   clsDbLinedList
{
public:
    class   Node
    {
    public:
        Node    *Prev;
        T       Value;
        Node    *Next;
    };
private:
    int         _size;
    Node        *_Head;
    Node        *_NewNode(T Value);
public:
    clsDbLinedList();
    friend ostream  &operator<<(ostream &o, const clsDbLinedList &RHS)
    {
        Node   *Current = RHS._Head;

        o << "============================================\n";
        o << "\tSize of DBL is: " << RHS._size << endl;
        o << "============================================\n";
        while (Current != nullptr)
        {
            o << Current->Value << " ";
            Current = Current->Next;
        }
        return o;
    }
	int		Size();
	bool	IsEmpty();
    void    InstertAtBeginning(T Value);
    void	InsertAfter(Node *N, T Value);
    Node	*LastNode();
    void    InsertAtEnd(T Value);
    Node    *Find(T Value);
    void    DeleteNode(Node *N);
    void    DeleteFirstNode();
	void	Clear();
	void	Reverce();
	void	Swap(Node *&N1, Node *&N);
	Node	*GetNode(int Index);
	T		GetItem(int Index);
	bool	UpdateItem(int Index, T NewValue);
	void	InsertAfter(int Index, T Value);
    void    DeleteLastNode();
};



#include "clsDbLinkedList.tpp"
// i use .tpp because the the templates are used in preprocessing so when i use .cpp, during linking can't link them becaue they separated