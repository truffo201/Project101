#ifndef _WINDOO_H_
#define _WINDOO_H_

#include "coord.h"

class Windoo
{

  public:
    virtual int show(const char *wname) = 0;
    virtual int hide(const char *wname) = 0;
    virtual int destroy() = 0;
    virtual int setTitle(const std::string &title) = 0;

};

#endif // _WINDOO_H_
