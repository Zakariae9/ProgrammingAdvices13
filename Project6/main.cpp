#include "MyStackArr.hpp"

int main()
{
    clsMyStackArr<int>    s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.push(70);
    s1.push(80);


    cout << "queue's item: ";
    s1.PrintList();

    cout << "Size of queue: " << s1.Size() << endl;
    cout << "Top: " << s1.Top() << endl;
    cout << "Bottom: " << s1.Bottom() << endl;
    cout << "after calling pop() list updated to: ";
    s1.pop();
    s1.PrintList();
    if (s1.IsEmpty())
        cout << "Queue is empty\n";
    else
        cout << "Queue is full\n";
    cout << "Item (1): " << s1.GetItem(1) << endl;
    s1.Reverse();
    cout << "List after revercing: ";
    s1.PrintList();
    
    cout << "After inserting 100 after 1: ";
    s1.InsertAfter(1, 100);
    s1.PrintList();
    cout << "After inserting at front 5: ";
    s1.InsertAtBeginning(5);
    s1.PrintList();
    
    cout << "After inserting at Bottom 44: ";
    s1.InsertAtEnd(5);
    s1.PrintList();
    cout << "After clearing queue: ";
    s1.Clear();
    s1.PrintList();
    
    return 0;
}