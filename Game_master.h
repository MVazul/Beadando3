#ifndef GAME_MASTER_H_INCLUDED
#define GAME_MASTER_H_INCLUDED
#include<vector>

class Game_master
{
public:
    Game_master();
    ~Game_master();
    int turn (int);
protected:
    bool color=0, active=1;
    std::vector<std::vector<bool>> tabla;
    int nr=0;
};

#endif // GAME_MASTER_H_INCLUDED
