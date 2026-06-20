#include "clsMyStack.hpp"

int main()
{
    clsMyStack<int>    s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    cout << "queue's item: ";
    s1.Print();

    cout << "Size of queue: " << s1.Size() << endl;
    cout << "Top: " << s1.Top() << endl;
    cout << "Bottom: " << s1.Bottom() << endl;
    cout << "after calling pop() list updated to: ";
    s1.pop();
    s1.Print();
    if (s1.IsEmpty())
        cout << "Queue is empty\n";
    else
        cout << "Queue is full\n";
    cout << "Item (1): " << s1.GetItem(1) << endl;
    s1.Reverce();
    cout << "List after revercing: ";
    s1.Print();
    cout << "After updating item 1 to 798 linst will be: ";
    s1.UpdateItem(1, 798);
    s1.Print();
    cout << "After inserting 100 after 798: ";
    s1.InsertAfter(1, 100);
    s1.Print();
    cout << "After inserting at front 5: ";
    s1.InsertAtFront(5);
    s1.Print();
    
    cout << "After inserting at Bottom 44: ";
    s1.InsertAtBack(5);
    s1.Print();
    cout << "After clearing queue: ";
    s1.Clear();
    s1.Print();
    
    return 0;
}