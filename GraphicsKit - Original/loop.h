#ifndef LOOP_H_INCLUDED
#define LOOP_H_INCLUDED
#define XX 700
#define YY 700
#include "Column.h"
#include "Abstract_app.h"
#include "Game_master.h"
#include <functional>

class Loop : public Abstract_app
{
public:
    Loop();
    ~Loop();
protected:
    void select(const genv::event&);
    std::vector<Column*> columns;
    Game_master* g;
    std::function<bool(int)> foo;
};


#endif // LOOP_H_INCLUDED
