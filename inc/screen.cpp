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

Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

Screen& Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;
    return *this;
}

const char Screen::back_ground = '*';