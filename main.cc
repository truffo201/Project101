#include "graphic.hh"
#include "x11.hh"
#include <string>

int     main(int argc, char **argv)
{
  Graphic *graph;
  Windoo  *w;
  X11     *x11;
  t_coord coord;
  t_coord size;

  x11 = new X11();
  graph = static_cast<Graphic *>(x11);
  graph->load();

  coord.x = 0;
  coord.y = 0;
  size.x = 640;
  size.y = 480;

  graph->newWindoo(std::string("Home").c_str(), &coord, &size);
  w = graph->getWindoo("Home");

  while (42)
  {
    w->show();
    graph->listenEvents();
  }
  graph->unload();
  return 0;
}
