#ifndef WIDGET_H_INCLUDED
#define WIDGET_H_INCLUDED
#define XX 700
#define YY 700

#include "graphics.hpp"

class Widget
{
public:
    Widget()=delete;
    Widget(int, int, int, int);
    virtual ~Widget();
    virtual void draw()=0;
    virtual void handle (const genv::event&)=0;
    virtual bool is_selected (const int&, const int&);
protected:
    int left, top, sizex, sizey;
    bool focused=false;
    virtual void unfocus();
};

#endif // WIDGET_H_INCLUDED
