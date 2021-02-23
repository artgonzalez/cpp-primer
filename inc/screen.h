#ifndef SCREEN_H
#define SCREEN_H
#include<iostream>
#include<string>


class Screen
{
friend class WindowManager;    
public:
    typedef std::string::size_type pos;//must appear before being used
    Screen() = default;
    Screen(pos h, pos w) : height(h), width(w), contents(h*w, '-'){}
    Screen(pos h, pos w, char c) : height(h), width(w), contents(h * w, c){}
    inline char get()const{return contents[cursor];}
    char get(pos h, pos c)const;
    Screen& move(pos r, pos c);
    Screen& set(char c);
    Screen& set(pos h, pos w, char c);
    Screen& display(std::ostream& out){do_display(out); return *this;}
private:
    void do_display(std::ostream& out)const{out<<contents;}
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

#endif