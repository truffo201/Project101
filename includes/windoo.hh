#ifndef _WINDOO_H_
#define _WINDOO_H_

#include "coord.h"
#include <string>

class Windoo
{

  public:
    virtual int show() = 0;
    virtual int hide() = 0;
    virtual int destroy() = 0;
    virtual int setTitle(const std::string &title) = 0;

};

#endif // _WINDOO_H_
