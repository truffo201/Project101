#include "wx11.hh"

int             WX11::create(const char *name, t_coord *pos, t_coord *size)
{
  /*
  wpair         ret;
  t_window      *w;

  if ((w = static_cast<t_window *>(malloc(sizeof(struct s_window) * 1))) == NULL)
    return 1; // malloc failed

  // size of the window
  w->size.x = size->x;
  w->size.y = size->y;

  // coordinates, parent window is (0,0)
  w->pos.x = pos->x;
  w->pos.y = pos->y;

  // create the window from X11
  w->window = XCreateSimpleWindow(_display,
                                  RootWindow(_display,
                                             DefaultScreen(_display)),
                                  w->pos.x, w->pos.y,
                                  w->size.x, w->size.y,
                                  2, BlackPixel(_display,
                                                DefaultScreen(_display)),
                                  WhitePixel(_display,
                                             DefaultScreen(_display)));

  // save the window for use
  ret = _windows.insert(std::pair<const char *, t_window *>(name, w));
  if (ret.second == false)
    return 2; // already exist
  */
  return 0; // success
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

int             WX11::destroy(const char *name)
{
  // t_window      *w;
  // witerator     it;

  // todo: find something much more sexy
  /*
  w = _windows[name];
  it = _windows.find(name);
  _windows.erase(it);
  return XDestroyWindow(_display, w->window);
  */
  return 0;
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
