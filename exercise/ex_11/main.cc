#include "Simple_window2.h"
#include "Graph.h"

#include <cmath>

constexpr double kpi = 3.1456;

Graph_lib::Polygon DrawPolygon(int radius, int num_of_sides) {
  Graph_lib::Polygon poly;
  Graph_lib::Point centre{300, 300};
  Graph_lib::Point p;

  for (int i = 0; i < num_of_sides; ++i) {
    p.x = radius * cos(2 * kpi * i / num_of_sides) + centre.x;
    p.y = radius * sin(2 * kpi * i / num_of_sides) + centre.y;

    poly.add(p);
  }
  return poly;
}

int FindApothem(int radius, int num_of_sides) {
  return radius * cos(kpi * num_of_sides);
}

int main() {
  Graph_lib::Simple_window win{Graph_lib::Point{100, 100}, 600, 600, "Exercise 11"};

  int radius = 150;

  Graph_lib::Polygon tri = DrawPolygon(radius, 3);

  Graph_lib::Polygon rect = DrawPolygon(radius + 50, 4);

  Graph_lib::Polygon poly = DrawPolygon(radius + 100, 5);

  win.attach(tri);
  win.attach(rect);
  win.attach(poly);

  win.wait_for_button();
}
