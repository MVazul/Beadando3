#include "Column.h"
using namespace genv;

Column::Column(int i) :
    Widget(i*100, 100, 100, 600){}
Column::~Column(){}
void Column::handle(const genv::event& e){}
void Column::draw()
{
    gout<<move_to(left, top)<<color(128*focused,128*focused,255)<<box(10,600)<<move_to(left+90, top)<<box(10,600)<<move_to(left+10, top);
    for(int i=0; i<6; i++)
        gout<<box(81, 20)<<move(-80, 80);
    gout<<box(81, 4);
    for(size_t i=0; i<items.size(); i++)
        gout<<move_to(left+10, YY-i*100-10)<<color(items[i]*255, (!items[i])*255, 0)<<box(80,-80);
}
void Column::drop(bool c) {items.push_back(c);}
bool Column::full() {return (items.size()==6);}
