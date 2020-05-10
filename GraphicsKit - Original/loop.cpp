#include "loop.h"
#include<vector>
using namespace genv;

void loop()
{
    std::vector<Column*> v;
    for (int i=0; i<7; i++)
        v.push_back(new Column(i));
    gout.open(XX, YY);
    event ev;
    while (gin>>ev && ev.keycode!=key_escape){

    }
}
