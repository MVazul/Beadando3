#include "Game_master.h"
using namespace std;

Game_master::Game_master():
    tabla(7){}
Game_master::~Game_master(){}
int Game_master::turn(int a)
{
    int h=tabla[a].size();
    if(active && h<6){
        tabla[a].push_back(color);
        nr++;
        if(nr==42){
            active=0;
            return (4+color);
        }
        for(int i=-1; i<=1; i++)
            for(int j=-1; j<=1; j++){
                for(int line=1; i!=j; line++)
                {
                    if(a+i*line<0 || a+i*line>=7 || h+j*line<0 || tabla[a+i*line].size() <= h+j*line || tabla[a+i*line][h+j*line]!=color)
                        break;
                    if(line==3){
                        active=0;
                        return (2+color);
                    }
                }
        }
        color=!color;
        return !color;
    }
    return 6;
}
