#include "wx11.hh"

WX11::WX11(const std::string &name, t_coord *pos, t_coord *size, Display *display)
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

WX11::~WX11()
{
  this->hide();
  this->destroy();
}

int     WX11::show()
{
  return XMapWindow(_display, _window);
}

int     WX11::hide()
{
  return XUnmapWindow(_display, _window);
}

int     WX11::destroy()
{
  return XDestroyWindow(_display, _window);
}

int     WX11::setTitle(const std::string &title)
{
  int   ret;

  // todo: check return value
  ret = XStoreName(_display, _window, title.c_str());
  return ret;
}
