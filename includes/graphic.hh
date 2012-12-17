#ifndef _GRAPHIC_H_
#define _GRAPHIC_H_

#include <string>
#include "coord.h"

class Windoo;

class Graphic
{

  public:
    virtual int load() = 0;
    virtual int unload() = 0;

    virtual int newWindoo(const std::string &name, t_coord *pos, t_coord *size) = 0;
    virtual int destroyWindoo(const std::string &wname) = 0;
    virtual Windoo *getWindoo(const std::string &wname) = 0;

    virtual void listenEvents() = 0;

};

#endif // _GRAPHIC_H_
