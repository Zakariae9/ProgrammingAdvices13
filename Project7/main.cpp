#include "clsMystring.hpp"

int main()
{
    clsMyString S1;

    S1.setValue("Zakarie1");
    S1.setValue("Zakarie2");
    S1.setValue("Zakarie3");
    
    cout << "S = " << S1.getValue() << endl;

    S1.Undo();
    cout << "Call Undo:\n";
    cout << "+++++++++++++++++++++++++\n";
    cout << "S after Undo= " << S1.getValue() << endl;
    S1.Undo();
    cout << "S after Undo= " << S1.getValue() << endl;
    S1.Undo();
    cout << "S after Undo= " << S1.getValue() << endl;

    S1.Redo();
    cout << "Call Redo:\n";
    cout << "+++++++++++++++++++++++++\n";
    cout << "S after Redo= " << S1.getValue() << endl;
    S1.Redo();
    cout << "S after Redo= " << S1.getValue() << endl;
    S1.Redo();
    cout << "S after Redo= " << S1.getValue() << endl;

    S1.Undo();
    cout << "S after Undo= " << S1.getValue() << endl;
    S1.Redo();
    cout << "S after Redo= " << S1.getValue() << endl;

    S1.Redo();
    cout << "S after Redo= " << S1.getValue() << endl;

    S1.Redo();
    cout << "S after Redo= " << S1.getValue() << endl;

    S1.Redo();
    cout << "S after Redo= " << S1.getValue() << endl;

    S1.Redo();
    cout << "S after Redo= " << S1.getValue() << endl;

    S1.Redo();
    cout << "S after Redo= " << S1.getValue() << endl;
    return 0;
}