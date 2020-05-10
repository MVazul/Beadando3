#ifndef GAME_MASTER_H_INCLUDED
#define GAME_MASTER_H_INCLUDED
#include<vector>

class Game_master
{
public:
    Game_master();
    ~Game_master();
    bool turn (int);
    int is_over(int);
protected:
    bool color;
    std::vector<std::vector<bool>> tabla;
};

#endif // GAME_MASTER_H_INCLUDED
