#include "Graph.h"
#include "Simple_window2.h"

int main() {
  Graph_lib::Simple_window win{Graph_lib::Point{100, 100}, 
                               Graph_lib::x_max(), 
                               Graph_lib::y_max(), 
                               "Frame"};

  /* Graph_lib::Rectangle large{Graph_lib::Point{95, 95},
                             0.33 * Graph_lib::x_max() + 10,
                             0.66 * Graph_lib::y_max() + 10};
  large.set_fill_color(Graph_lib::Color::red);


  Graph_lib::Rectangle small{Graph_lib::Point{100, 100},
                             0.33 * Graph_lib::x_max(),
                             0.66 * Graph_lib::y_max()};

  small.set_fill_color(Graph_lib::Color::white);

  win.attach(large);
  win.attach(small); */

  Graph_lib::Rectangle large{Graph_lib::Point{100, 100},
                             0.666 * Graph_lib::x_max(),
                             0.75  * Graph_lib::y_max()};
  large.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 10));
  large.set_color(Graph_lib::Color::red);

  win.attach(large);
  win.wait_for_button();
}
