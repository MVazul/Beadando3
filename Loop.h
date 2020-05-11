#ifndef LOOP_H_INCLUDED
#define LOOP_H_INCLUDED
#define XX 700
#define YY 700
#include "Column.h"
#include "States_textbox.h"
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
    States_textbox* st;
    Game_master* g;
    std::function<int(int)> foo;
    std::function<void(int)> overfoo;
};


#endif // LOOP_H_INCLUDED
