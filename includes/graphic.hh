#ifndef _GRAPHIC_H_
#define _GRAPHIC_H_

#include "coord.h"

class Graphic
{

  public:
    virtual int load() = 0;
    virtual int unload() = 0;

    virtual void listenEvents() = 0;

};

#endif // _GRAPHIC_H_
