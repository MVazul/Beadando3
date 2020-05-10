#include "loop.h"
#include<vector>
using namespace genv;

void loop()
{
    std::vector<Column*> v;
    Column* selected=nullptr;
    bool color=0;
    for (int i=0; i<7; i++)
        v.push_back(new Column(i));
    gout.open(XX, YY);
    event ev;
    while (gin>>ev && ev.keycode!=key_escape){
        if(ev.type==ev_mouse)
        {
            for (int i=0; i<7; i++){
                if (v[i]->is_selected(ev.pos_x, ev.pos_y)){
                    selected=v[i];
                    break;
                }
            }
            if(ev.button==btn_left && ev.pos_y>=100)
            {
                if(!selected->full()){
                    selected->drop(color);
                    for (int i=0; i<7; i++)
                        v[i]->draw();
                    gout<<refresh;
                }
            }
        }
    }
}
