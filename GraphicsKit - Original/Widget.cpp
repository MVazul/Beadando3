#include "Widget.h"

Widget::Widget(int l, int t, int sx, int sy):
    left(l),
    top(t),
    sizex(sx),
    sizey(sy){}
Widget::~Widget(){}
bool Widget::is_selected(const int& cx, const int& cy)
{
    if (cx>=left && cx<=left+sizex && cy>=top && cy<=top+sizey)
    {
        focused=true;
        return true;
    }
    unfocus();
    return false;
}
void Widget::unfocus() {focused=false;}
