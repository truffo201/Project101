#ifndef _WINDOO_H_
#define _WINDOO_H_

#include "coord.h"

class Windoo
{

  public:
    virtual int create(const char *wname, struct s_coord *pos, struct s_coord *size) = 0;
    virtual int show(const char *wname) = 0;
    virtual int hide(const char *wname) = 0;
    virtual int destroy(const char *wname) = 0;
    virtual int setTitle(const char *wname, const char *title) = 0;

};

#endif // _WINDOO_H_
