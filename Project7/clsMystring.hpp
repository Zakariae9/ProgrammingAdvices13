#pragma once 

#include <iostream>
#include <stack>
using namespace std;


class   clsMyString
{
private:
    string  _Value;
    stack   <string>_undo;
    stack   <string>_redo;
public:
    clsMyString();
    void    setValue(string Value);
    string  getValue();
    void  Undo();
    void  Redo();
};