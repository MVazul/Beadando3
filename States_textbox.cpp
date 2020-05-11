#include "States_textbox.h"
using namespace genv;

States_textbox::States_textbox(int l, int t, int sx, int sy, int nr, std::vector<std::string> s):
    Widget(l, t, sx, sy),
    id(nr){states=s;}
States_textbox::~States_textbox(){}
void States_textbox::handle(const event& e){}
bool States_textbox::is_selected(const int& i, const int& j) {return false;}
void States_textbox::draw()
{
    gout<<move_to(left, top)<<color(255,255,255)<<text(states[id]);
}
void States_textbox::change_state(int a)
{
    if(a<states.size() && a>=0)
        id=a;
}
