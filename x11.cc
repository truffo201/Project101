#include "x11.hh"
#include <X11/Xlib.h>
#include <stdlib.h>

int X11::load()
{
  if ((_display = XOpenDisplay((char*)getenv("DISPLAY"))) == NULL)
    return 1; // cannot open a connection to the X server
  return 0; // success
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
