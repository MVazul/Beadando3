#ifndef LOOP_H_INCLUDED
#define LOOP_H_INCLUDED
#define XX 700
#define YY 700
#include "Column.h"
#include "Abstract_app.h"

class Loop : public Abstract_app
{
public:
    Loop();
    ~Loop();
protected:
    void select(const genv::event&);
    std::vector<Column*> columns;
};


#endif // LOOP_H_INCLUDED
