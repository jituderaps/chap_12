#include "Graph.h"
#include "Simple_window2.h"

int main() {
  Graph_lib::Point window_postion{100, 100};
  Graph_lib::Simple_window win{window_postion, 600, 400, "Drill Exercise"};

  Graph_lib::Circle c{Graph_lib::Point{200, 200}, 100};

  c.set_color(Graph_lib::Color::green);
  c.set_style(Graph_lib::Line_style(Graph_lib::Line_style::dot, 300));
  c.set_fill_color(Graph_lib::Color::blue);

  win.attach(c);
  win.wait_for_button();

}
