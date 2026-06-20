#include "MyDynamicArray.hpp"

int main()
{

    MyDynamicArray<int> D1(8);

    D1.SetItem(0, 10);
    D1.SetItem(1, 20);
    D1.SetItem(2, 30);
    D1.SetItem(3, 40);
    D1.SetItem(4, 50);
    D1.SetItem(5, 60);
    D1.SetItem(5, 70);
    D1.SetItem(5, 80);


    cout << "\nIs empty: " << D1.IsEmpty() << endl;
    cout << "Array size: " << D1.Size() << endl;
    cout << "Array Item:\n";
    D1.PrintList();

    D1.Resize(10);
    cout << "After resizing MyDynamic array to 10 items list updated to: ";
    D1.PrintList();
    cout << "Item [2]= " << D1.GetItem(2) << endl;

    // D1.Reverse();
    // cout << "After reversing MyDynamic array list updated to: ";
    // D1.PrintList();

    // D1.Clear();
    // cout << "After clear() size: " << D1.Size() << endl;
    // cout << "Empty: " << D1.IsEmpty() << endl;
    // cout << "List: ";
    // D1.PrintList();

    D1.Resize(5);
    D1.PrintList();
    D1.DeleteItemAt(4);
    cout << "After deleting item 4 list: " ;
    D1.PrintList();

    D1.DeleteFirstItem();
    D1.DeleteLastItem();
    cout << "List after deleting first and last items: ";
    D1.PrintList();

    cout << "30 value at index: " << D1.Find(30) << endl;
    D1.DeleteItem(30);
    cout << "List after deleting value 30 and last items: ";
    D1.PrintList();

    D1.InsertAtBeginning(100);
    cout << "List after Inserting 100 at beginning: "; 
    D1.PrintList();

    D1.InsertAtEnd(400);
    cout << "List after Inserting 400 at End: "; 
    D1.PrintList();

    D1.InsertAfter(0, 200);
    cout << "List after Inserting 200 after 0: "; 
    D1.PrintList();

    D1.InsertBefore(1, 300);
    cout << "List after Inserting 300 before 1: "; 
    D1.PrintList();

    return 0;
}