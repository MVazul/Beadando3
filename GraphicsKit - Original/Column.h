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
    void drop(bool);
    bool full();
protected:
    std::vector<bool> items;
    void handle(const genv::event&);
};


#endif // COLUMN_H_INCLUDED
