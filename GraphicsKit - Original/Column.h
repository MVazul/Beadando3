#ifndef COLUMN_H_INCLUDED
#define COLUMN_H_INCLUDED
#include "Widget.h"
#include<vector>

class Column : public Widget
{
public:
    Column()=delete;
    Column(int);
    ~Column();
    void draw();
    void handle(const genv::event&);
    void drop(bool);
protected:
    std::vector<bool> items;
};


#endif // COLUMN_H_INCLUDED
