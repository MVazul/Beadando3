#include "Game_master.h"
using namespace std;

Game_master::Game_master() :
    color(0),
    tabla(7){}
Game_master::~Game_master(){}
bool Game_master::turn(int a)
{
    tabla[a].push_back(color);
    color=!color;
    return !color;
}
int Game_master::is_over(int a)
{
    for(int i=-1; i<=1; i++)
        for(int j=-1; j<=1; j++){
            for(int line=1; i!=j; line++)
            {
                //if
            }
    }
}
