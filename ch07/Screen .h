#pragma once

#include <string>
#include "Window_mgr.h"

class Screen {
// Window_mgr members can access the private parts of class Screen
friend class Window_mgr;
friend void Window_mgr::clear(ScreenIndex);
// ... rest of the Screen class
public:
    typedef std::string::size_type pos;
    Screen() = default; // needed because Screen has another constructor
    // cursor initialized to 0 by its in-class initializer
    Screen(pos ht, pos wd, char c) : height(ht), width(wd),
        contents(ht* wd, c) { }
    char get() const              // get the character at the cursor
    {
        return contents[cursor];
    }       // implicitly inline
    inline char get(pos ht, pos wd) const; // explicitly inline
    Screen& move(pos r, pos c);      // can be made inline later
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    mutable size_t access_ctr;
public:
    void some_member() const;
    Screen& set(char);
    Screen& set(pos, pos, char);
    // display overloaded on whether the object is const or not
    Screen& display(std::ostream& os)
    {
        do_display(os); return *this;
    }
    const Screen& display(std::ostream& os) const
    {
        do_display(os); return *this;
    }
private:
    // function to do the work of displaying a Screen
    void do_display(std::ostream& os) const { os << contents; }

};