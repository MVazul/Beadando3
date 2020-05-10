#include "Loop.h"
using namespace genv;

Loop::Loop() : Abstract_app(XX, YY)
{
    g=new Game_master();
    auto foo =[&](int a){return g->turn(a);};
    for (int i=0; i<7; i++){
        columns.push_back(new Column(i, foo));
        v.push_back(columns[i]);
    }
}
Loop::~Loop(){}
void Loop::select(const event& ev)
{
    if(ev.type==ev_mouse){
            if(selected)
                selected->unfocus();
            selected=nullptr;
            for (int i = v.size()-1; i>=0; i--){
                if(v[i]->is_selected(ev.pos_x, ev.pos_y))
                    {
                        selected=v[i];
                        v.erase(v.begin()+i);
                        v.push_back(selected);
                        break;
                    }
            }
        }
}
