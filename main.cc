#include "Graphic.hh"
#include "x11.hh"

int     main(int argc, char **argv)
{
  Graphic *graph;
  X11     *x11;

  x11 = new X11();
  graph = static_cast<Graphic *>(x11);
  graph->load();
  while (42)
    graph->listenEvents();
  graph->unload();
  return 0;

  /*

  coord.x = 0;
  coord.y = 0;
  size.x = 640;
  size.y = 480;
  */
  // create a new window
  /*graph->windowCreate("Home", &coord, &size);
  graph->windowShow("Home");
  graph->windowSetTitle("Home", "KikooLoL");
  */
}
