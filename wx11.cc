#include "wx11.hh"

WX11::WX11(std::string &name, t_coord *pos, t_coord *size, Display *display)
{
  // size of the window
  _size.x = size->x;
  _size.y = size->y;

  // coordinates, parent window is (0,0)
  _pos.x = pos->x;
  _pos.y = pos->y;


  // save name of the window
  _name = name;

  // keep entry of display
  _display = display;

  // create the window from X11
  _window = XCreateSimpleWindow(_display,
                                RootWindow(_display,
                                           DefaultScreen(_display)),
                                _pos.x, _pos.y,
                                _size.x, _size.y,
                                2, BlackPixel(_display,
                                              DefaultScreen(_display)),
                                WhitePixel(_display,
                                           DefaultScreen(_display)));
}

int             WX11::show(const char *name)
{
  //  t_window      *w;

  // todo: check on errors
  //w = _windows[name];
  //return XMapWindow(_display, w->window);
  return 0;
}

int             WX11::hide(const char *name)
{
  //t_window      *w;

  // todo: check on errors
  //w = _windows[name];
  //return XUnmapWindow(_display, w->window);
  return 0;
}

int     WX11::destroy()
{
  return XDestroyWindow(_display, _window);
}

int             WX11::setTitle(const char *wname, const char *title)
{
  /*
  t_window      *w;
  int           ret;

  w = _windows[wname];
  // todo: check return value
  ret = XStoreName(_display, w->window, title);
  return ret;
*/
  return 0;
}
