#ifndef ABSTRACT_APP_H_INCLUDED
#define ABSTRACT_APP_H_INCLUDED
#include "Widget.h"
#include<vector>

class Abstract_app
{
public:
    Abstract_app()=delete;
    Abstract_app(int, int);
    virtual ~Abstract_app();
    void run();
protected:
    int xx, yy;
    std::vector<Widget*> v;
    Widget* selected=nullptr;
    virtual void select(const genv::event&);
};

#endif // ABSTRACT_APP_H_INCLUDED
