#include "Loop.h"
using namespace genv;

Loop::Loop() : Abstract_app(XX, YY)
{
    g=new Game_master();
    foo =[&](int a){return g->turn(a);};
    std::vector<std::string> mess{"Red's turn.", "Green's turn", "GREEN WON!", "RED WON!", "DRAW", "DRAW"};
    st=new States_textbox(20, 35, 100, 20, 1, mess);
    overfoo= [&](int b){return st->change_state(b);};
    for (int i=0; i<7; i++){
        columns.push_back(new Column(i, foo, overfoo));
        v.push_back(columns[i]);
    }
    v.push_back(st);
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
