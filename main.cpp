#include "clsDbLinkedList.hpp"


int main()
{
    clsDbLinedList<int> DBL;

    DBL.InstertAtBeginning(30);
    DBL.InstertAtBeginning(20);
    DBL.InstertAtBeginning(10);
    DBL.InsertAfer(DBL.Find(20), 50);
    cout << DBL << endl;
    return 0;
}