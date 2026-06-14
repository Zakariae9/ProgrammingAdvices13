#include "MyQueue.hpp"

int main()
{
    MyQueue<int>    Q1;

    Q1.push(10);
    Q1.push(20);
    Q1.push(30);
    Q1.push(40);

    cout << "queue's item: ";
    Q1.Print();

    cout << "Size of queue: " << Q1.Size() << endl;
    cout << "front: " << Q1.fornt() << endl;
    cout << "back: " << Q1.back() << endl;
    cout << "after calling pop() list updated to: ";
    Q1.pop();
    Q1.Print();
    if (Q1.IsEmpty())
        cout << "Queue is empty\n";
    else
        cout << "Queue is full\n";
    cout << "Item (1): " << Q1.GetItem(1) << endl;
    Q1.Reverce();
    cout << "List after revercing: ";
    Q1.Print();
    cout << "After updating item 1 to 798 linst will be: ";
    Q1.UpdateItem(1, 798);
    Q1.Print();
    cout << "After inserting 100 after 798: ";
    Q1.InsertAfter(1, 100);
    Q1.Print();
    cout << "After inserting at front 5: ";
    Q1.InsertAtFront(5);
    Q1.Print();

    cout << "After inserting at back 44: ";
    Q1.InsertAtBack(5);
    Q1.Print();
    cout << "After clearing queue: ";
    Q1.Clear();
    Q1.Print();
    return 0;
}