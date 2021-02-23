#ifndef SCREEN_H
#define SCREEN_H
#include<string>


class Screen
{
public:
    typedef std::string::size_type pos;//must appear before being used
    Screen() = default;
    Screen(pos h, pos w, char c) : height(h), width(w), contents(h * w, c){}
    inline char get()const{return contents[cursor];}
    char get(pos h, pos c)const;
    Screen& move(pos r, pos c);
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

#endif