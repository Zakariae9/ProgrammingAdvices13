#include "clsDbLinkedList.hpp"


int main()
{
    clsDbLinedList<int> DBL;

    if (DBL.IsEmpty())
        cout << "List is empty\n";
    else
        cout << "List is full\n";
    DBL.InstertAtBeginning(3);
    DBL.InstertAtBeginning(2);
    DBL.InstertAtBeginning(1);
    DBL.InstertAtBeginning(4);
    DBL.InsertAfter(DBL.Find(4), 5);

    // cout << DBL << endl;

    // DBL.DeleteNode(DBL.Find(10));
    // cout << "After delete Node 10\n";
    cout << DBL << endl;
    // DBL.InsertAtEnd(10);
    // // cout << "After delete Node 10\n";
    // // cout << DBL <<endl; 
    // cout << "size = " << DBL.Size() << endl;
    // if (DBL.IsEmpty())
    //     cout << "List is empty\n";
    // else
    //     cout << "List is full\n";
    // DBL.Reverce();
    // cout << "After reverce list, List update to: " << DBL << endl;
    // DBL.Clear();
    // if (DBL.IsEmpty())
    //     cout << "List is empty\n";
    // else
    //     cout << "List is full\n";


    DBL.InsertAfter(5, 88);
    cout << DBL << endl;

    return 0;
}