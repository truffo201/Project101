#ifndef _X11_H_
#define _X11_H_

#include <X11/Xlib.h>
#include "coord.h"
#include "graphic.hh"
#include "windoo.hh"
#include <map>
#include <string>

typedef std::map<const char *, Windoo *>::iterator witerator;
typedef std::pair<std::map<const char *, Windoo *>::iterator, bool> wpair;
typedef std::map<const char *, Windoo*> wmap;

class X11 : public Graphic
{

  public:
    int  load();
    int  unload();

  int newWindoo(std::string &name, t_coord *pos, t_coord *size);
    void listenEvents();

  private:
    Display     *_display;
    XEvent      _event;
    wmap        _windows;

};

#endif // _X11_H_
