#include "Column.h"
using namespace genv;

Column::Column(int i, std::function<int(int)> f, std::function<void(int)> of) :
    Widget(i*100, 80, 100, 620),
    nr(i)
{
    foo=f;
    overfoo=of;
}
Column::~Column(){}
void Column::handle(const genv::event& e)
{
    if(e.button==btn_left)
    {
        int code=foo(nr);
        if(code!=6){
            items.push_back(code%2);
            overfoo(code);
        }
    }
}
void Column::draw()
{
    gout<<move_to(left, top)<<color(128*focused,128*focused,255)<<box(10,620)<<move_to(left+90, top)<<box(10,620);
    for(int i=0; i<=6; i++)
        gout<<move_to(left+10, top+i*100)<<box(80, 20);
    for(size_t i=0; i<items.size(); i++)
        gout<<move_to(left+10, top+sizey-i*100-21)<<color(items[i]*255, (!items[i])*255, 0)<<box(80,-80);
}
