#include "x11.hh"
#include "wx11.hh"
#include "windoo.hh"
#include <X11/Xlib.h>
#include <stdlib.h>
#include <string>

class Windoo;

int X11::load()
{
  if ((_display = XOpenDisplay((char*)getenv("DISPLAY"))) == NULL)
    return 1; // cannot open a connection to the X server
  return 0; // success
}

int X11::newWindoo(const std::string &name, t_coord *pos, t_coord *size)
{
  Windoo *w;
  wpair  ret;

  // create new Window
  w = static_cast<Windoo *>(new WX11(name, pos, size, _display));

  // save the window for use
  ret = _windows.insert(std::pair<std::string, Windoo *>(std::string(name), w));
  if (ret.second == false)
    return 1; // already exist

  return 0; // success
}

int X11::destroyWindoo(const std::string &name)
{
  witerator     it;

  it = _windows.find(name);
  _windows.erase(it);
  return 1;
}

Windoo *X11::getWindoo(const std::string &wname)
{
  return _windows[wname];
}

int X11::unload()
{
  // clean all windows from map before shutdown the connection
  // _windows.clear();
  // todo: check errors on XCloseDisplay
  // shutdown the connection to X server
  XCloseDisplay(_display);
  return 0; // success
}

void    X11::listenEvents()
{
  XNextEvent(_display, &_event);
}
