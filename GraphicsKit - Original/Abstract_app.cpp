#include "Abstract_app.h"
using namespace genv;

Abstract_app::Abstract_app(int x, int y):
    xx(x),
    yy(y){}
Abstract_app::~Abstract_app(){}
void Abstract_app::select(const event& ev)
{
    if(ev.button==btn_left){
            selected=nullptr;
            for (int i = v.size()-1; i>=0; i--)
                if(v[i]->is_selected(ev.pos_x, ev.pos_y))
                    {
                        selected=v[i];
                        v.erase(v.begin()+i);
                        v.push_back(selected);
                        break;
                    }
        }
}
void Abstract_app::run()
{
    Widget* selected=nullptr;
    gout.open(xx,yy);
    event ev;
    gin.timer(40);
    while(gin>>ev && ev.keycode!=key_escape){
        select(ev);
        if(selected)
            selected->handle(ev);
        if (ev.type==ev_timer)
        {
            gout<<move_to(0,0)<<color(0,0,0)<<box(xx,yy);
            for(auto a: v)
                a->draw();
            gout<<refresh;
        }
    }
}
