#ifndef _X11_H_
#define _X11_H_

#include "Graphic.hh"
#include "coord.h"
#include <X11/Xlib.h>
#include <map>

/*
typedef std::pair<std::map<const char *, t_window *>::iterator, bool> wpair;
typedef std::map<const char *, t_window*> wmap;
typedef std::map<const char *, t_window *>::iterator witerator;
*/

class X11 : public Graphic
{

  public:
    int  load();
    int  unload();

    void listenEvents();

  private:
    Display     *_display;
    XEvent      _event;
  //wmap        _windows;

};

#endif // _X11_H_
