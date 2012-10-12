#ifndef _WINDOW_H_
#define _WINDOW_H_

#include "coord.h"

class Window
{

  public:
    virtual int create(const char *wname, t_coord *pos, t_coord *size) = 0;
    virtual int show(const char *wname) = 0;
    virtual int hide(const char *wname) = 0;
    virtual int destroy(const char *wname) = 0;
    virtual int setTitle(const char *wname, const char *title) = 0;

};

#endif // _WINDOW_H_
