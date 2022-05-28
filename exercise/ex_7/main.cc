#include "Graph.h"
#include "Simple_window2.h"

int main() {
  Graph_lib::Simple_window win{Graph_lib::Point{100, 100},
                               1000, 600, "Home"};

  Graph_lib::Rectangle rec_wall{Graph_lib::Point{400, 200}, 500, 300};
  rec_wall.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 5));
  rec_wall.set_fill_color(Graph_lib::Color::blue);
  win.attach(rec_wall);

  Graph_lib::Polygon front_wall;
  front_wall.add(Graph_lib::Point{400, 200});
  front_wall.add(Graph_lib::Point{300, 150});
  front_wall.add(Graph_lib::Point{300, 450});
  front_wall.add(Graph_lib::Point{400, 500});
  front_wall.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 5));
  front_wall.set_fill_color(Graph_lib::Color::red);
  win.attach(front_wall);

  Graph_lib::Polygon front_wall_top;
  front_wall_top.add(Graph_lib::Point{400, 200});
  front_wall_top.add(Graph_lib::Point{350, 100});
  front_wall_top.add(Graph_lib::Point{300, 150});
  front_wall_top.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 5));
  front_wall_top.set_fill_color(Graph_lib::Color::yellow);
  win.attach(front_wall_top);

  Graph_lib::Polygon roof;
  roof.add(Graph_lib::Point{350, 100});
  roof.add(Graph_lib::Point{900, 100});
  roof.add(Graph_lib::Point{900, 200});
  roof.add(Graph_lib::Point{400, 200});
  roof.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 5));
  roof.set_fill_color(Graph_lib::Color::cyan);
  win.attach(roof);

  Graph_lib::Rectangle door{Graph_lib::Point{300, 200}, 80, 250};
  door.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 3));
  door.set_fill_color(Graph_lib::Color::magenta);
  win.attach(door);

  Graph_lib::Rectangle window_1{Graph_lib::Point{600, 300}, 50, 50};
  window_1.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 7));
  window_1.set_fill_color(Graph_lib::Color::white);
  win.attach(window_1);

  Graph_lib::Rectangle window_2{Graph_lib::Point{650, 350}, 50, 50};
  window_2.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 7));
  window_2.set_fill_color(Graph_lib::Color::white);
  win.attach(window_2);

  win.wait_for_button();
}
