#ifndef _X11_H_
#define _X11_H_

#include "graphic.hh"
#include <X11/Xlib.h>
#include "coord.h"
#include "windoo.hh"
#include <map>

typedef std::map<std::string, Windoo *>::iterator witerator;
typedef std::pair<std::map<std::string, Windoo *>::iterator, bool> wpair;
typedef std::map<std::string, Windoo*> wmap;

class X11 : public Graphic
{

  public:
    int    load();
    int    unload();

    int    newWindoo(const std::string &name, t_coord *pos, t_coord *size);
    int    destroyWindoo(const std::string &wname);
    Windoo *getWindoo(const std::string &wname);

    void   listenEvents();

  private:
    Display     *_display;
    XEvent      _event;
    wmap        _windows;

};

#endif // _X11_H_
