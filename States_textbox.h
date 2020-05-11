#ifndef STATES_TEXTBOX_H_INCLUDED
#define STATES_TEXTBOX_H_INCLUDED
#include "Widget.h"
#include<vector>

class States_textbox : public Widget
{
public:
    States_textbox()=delete;
    States_textbox(int, int, int, int, int, std::vector<std::string>);
    ~States_textbox();
    void draw();
    void handle(const genv::event&);
    bool is_selected(const int&, const int&);
    void change_state(int);
protected:
    std::vector<std::string> states;
    int id;
};


#endif // STATES_TEXTBOX_H_INCLUDED
