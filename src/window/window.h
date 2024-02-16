#ifndef WINDOW_H
#define WINDOW_H

#include <gtkmm/window.h>

class MyWindow : public Gtk::Window
{
public:
    MyWindow();
};

#include "window.cpp"
#endif