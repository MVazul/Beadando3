#include "Column.h"
using namespace genv;

Column::Column(int i) :
    Widget(i*100, 80, 100, 620){}
Column::~Column(){}
void Column::handle(const genv::event& e){}
void Column::draw()
{
    gout<<move_to(left, top)<<color(128*focused,128*focused,255)<<box(10,620)<<move_to(left+90, top)<<box(10,620);
    for(int i=0; i<=6; i++)
        gout<<move_to(left+10, top+i*100)<<box(80, 20);
    for(size_t i=0; i<items.size(); i++)
        gout<<move_to(left+10, top+sizey-i*100-21)<<color(items[i]*255, (!items[i])*255, 0)<<box(80,-80);
}
void Column::drop(bool c) {items.push_back(c);}
bool Column::full() {return (items.size()==6);}
