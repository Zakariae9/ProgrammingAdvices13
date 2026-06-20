#include "clsDbLinkedList.hpp"

template<typename T>
clsDbLinedList<T>::clsDbLinedList()
{
    _size = 0;
    _Head = NULL;
}

template<typename T>
void    clsDbLinedList<T>::DeleteLastNode()
{
    Node    *N = LastNode();
    if (Size() == 1)
    {
        delete N;
        _Head = nullptr;
        return ;
    }
    N->Prev->Next = nullptr;
    N->Prev = nullptr;
    delete N;
    _size--;
}

template <typename T>
typename clsDbLinedList<T>::Node*  clsDbLinedList<T>::_NewNode(T Value)
{
    Node*   node = new Node();

    node->Prev = nullptr;
    node->Value = Value;
    node->Next = nullptr;
    return node;
}

template<typename T>
int	clsDbLinedList<T>::Size()
{
	return this->_size;
}

template<typename T>
void	clsDbLinedList<T>::Clear()
{
	while (_size)
		DeleteFirstNode();
}

template<typename T>
bool	clsDbLinedList<T>::IsEmpty()
{
	return	_size? false: true;
}

template<typename T>
void	clsDbLinedList<T>::Swap(Node *&N1, Node *&N2)
{
	Node	*Temp;

	Temp = N1;
	N1 = N2;
	N2 = Temp;
}

template<typename T>
void	clsDbLinedList<T>::Reverce()
{	
	Node	*Current = _Head;
	while (Current != nullptr)
	{
		_Head = Current;
		Swap(Current->Next, Current->Prev);
		Current = Current->Prev;
	}
}

template <typename T>
void    clsDbLinedList<T>::InstertAtBeginning(T Value)
{
    Node *N = _NewNode(Value);
    
    if (!_size)
    {
        _size++;
        this->_Head = N;
        return;
    }
    N->Next = _Head;
    _Head->Prev = N;
    _Head = N;
    _size++;
}

template<typename T>
void    clsDbLinedList<T>::InsertAfter(clsDbLinedList<T>::Node *N, T Value)
{
    Node    *New;
    
    if (N == nullptr)
    {
        cerr << "This Node doen't exist\n";
        return ;
    }
    New = _NewNode(Value);
    New->Prev = N;
    New->Next = N->Next;
	if (N->Next != nullptr)
		N->Next->Prev = New;
    N->Next = New;
    this->_size++;
}

template<typename T>
bool	clsDbLinedList<T>::UpdateItem(int Index,T NewValue)
{
	Node	*NewItem = GetNode(Index);
	
	if (NewItem == NULL)
		return false;
	NewItem->Value = NewValue;
	return true;
}

template<typename T>
void	clsDbLinedList<T>::InsertAfter(int Index, T Value)
{
	InsertAfter(GetNode(Index), Value);
}

template<typename T>
T	clsDbLinedList<T>::GetItem(int Index)
{
	if (Index >= Size() || Index < 0)
		return NULL;
	return GetNode(Index)->Value;
}

template<typename T>
typename clsDbLinedList<T>::Node	*clsDbLinedList<T>::GetNode(int Index)
{
	Node	*Current = _Head;
	
	if (Index >= Size() || Index < 0)
		cout << "Index is out of range\n";
	for (int i = 0; i <= Index; i++)
	{
		if (i == Index)
			return Current;
		Current = Current->Next;
	}
	return nullptr;
}

template<typename T>
typename clsDbLinedList<T>::Node    *clsDbLinedList<T>::Find(T Value)
{
    Node    *Current = _Head;
    while (Current != nullptr)
    {
        if (Current->Value == Value)
            return Current;
        Current = Current->Next;
    }
    return nullptr;
}
template<typename T>
void    clsDbLinedList<T>::DeleteFirstNode()
{
    DeleteNode(Find(_Head->Value));
}
template<typename T>
typename clsDbLinedList<T>::Node	*clsDbLinedList<T>::LastNode()
{
	Node	*Current = _Head;

	if (Current == nullptr)
		return nullptr;
	while (Current->Next != nullptr)
		Current = Current->Next;
	return Current;
}
template<typename T>
void    clsDbLinedList<T>::InsertAtEnd(T Value)
{
	Node	*N = _NewNode(Value);
	Node	*Last = LastNode();

    _size++;
    if (Last == nullptr)
    {
        _Head = N;
        return ;
    }
	Last->Next = N;
	N->Prev = Last;
}
template<typename T>
void    clsDbLinedList<T>::DeleteNode(Node *N)
{
    if (N == nullptr)
    {
        cout << "This Node doen't exist\n";
        return ;
    }
    else if(_size == 1)
        _Head = nullptr;
    else if(_Head == N)
    {
        _Head = N->Next;
        N->Next->Prev = nullptr;
    }
    else if (N->Next == nullptr)
        N->Prev->Next = nullptr;
    else
    {
        N->Prev->Next = N->Next;
        N->Next->Prev = N->Prev;
    }
    delete N;
    _size--;
}


