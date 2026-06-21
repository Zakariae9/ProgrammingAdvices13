#include "clsMystring.hpp"

clsMyString::clsMyString(): _Value("")
{
    _undo.push(_Value);
}

void    clsMyString::setValue(string Value)
{
    _Value = Value;
    _undo.push(_Value);
}

string  clsMyString::getValue()
{
    return _Value;
}

void  clsMyString::Undo()
{
    if (_undo.empty())
        return ;
    _redo.push(_undo.top());
    _undo.pop();
    _Value = _undo.top();
}

void  clsMyString::Redo()
{
    if (_redo.empty())
        return ;
    setValue(_redo.top());
    _redo.pop();
}


