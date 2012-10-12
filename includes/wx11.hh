#ifndef _WX11_H_
#define _WX11_H_

#include "window.hh"
#include "coord.h"

class WX11 : public Window
{

  public:
    int create(const char *wname, t_coord *pos, t_coord *size);
    int show(const char *wname);
    int hide(const char *wname);
    int destroy(const char *wname);
    int setTitle(const char *wname, const char *title);

  private:
  //Display     *_display;

};

#endif // _WX11_H_
