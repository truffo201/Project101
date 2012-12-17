#include "graphic.hh"
#include "x11.hh"
#include <string>

int     main(int argc, char **argv)
{
  Graphic *graph;
  Windoo  *home;
  Windoo  *menu;
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

  graph->newWindoo("Home", &coord, &size);
  graph->newWindoo("Menu", &coord, &size);
  home = graph->getWindoo("Home");
  menu = graph->getWindoo("Menu");

  home->setTitle("Welcome !");
  menu->setTitle("Choose an option:");
  while (42)
  {
    home->show();
    graph->listenEvents();
  }
  graph->unload();
  return 0;
}
