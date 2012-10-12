#ifndef _WX11_H_
#define _WX11_H_

#include <X11/Xlib.h>
#include <string>
#include "windoo.hh"
#include "coord.h"

class WX11 : public Windoo
{

  public:
        WX11(const std::string &wname, t_coord *pos, t_coord *size, Display *display);
        ~WX11();
    int show();
    int hide();
    int destroy();
    int setTitle(const std::string &title);

  private:
    Display     *_display;
    Window      _window;
    std::string _name;
    t_coord     _size;
    t_coord     _pos;

};

#endif // _WX11_H_
