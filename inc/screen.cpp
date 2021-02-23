#include "screen.h"

char Screen::get(pos r, pos c)const
{
    pos row = r * width;//row location
    return contents[row + c];//character at given column
}

inline Screen& Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    
    return *this;  //return as lvalue
}