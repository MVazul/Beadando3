#ifndef COLUMN_H_INCLUDED
#define COLUMN_H_INCLUDED
#include "Widget.h"
#include<vector>
#include<functional>

class Column : public Widget
{
public:
    Column()=delete;
    Column(int, std::function<int(int)>, std::function<void(int)>);
    ~Column();
    void draw();
    void drop(bool);
    bool full();
    void handle(const genv::event&);
protected:
    int nr;
    std::vector<bool> items;
    std::function<int(int)> foo;
    std::function<void(int)> overfoo;
};


#endif // COLUMN_H_INCLUDED
