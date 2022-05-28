#include "Graph.h"
#include "Simple_window2.h"

int main() {
  Graph_lib::Simple_window win{Graph_lib::Point{100, 100},
                               800, 600, "Olympic Symbol"};

  Graph_lib::Circle c_0{Graph_lib::Point{100,100}, 50};
  c_0.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 10));
  c_0.set_color(Graph_lib::Color::blue);
  win.attach(c_0);
  
  Graph_lib::Circle c_1{Graph_lib::Point{210,100}, 50};
  c_1.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 10));
  c_1.set_color(Graph_lib::Color::black);
  win.attach(c_1);
 
  Graph_lib::Circle c_2{Graph_lib::Point{320,100}, 50};
  c_2.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 10));
  c_2.set_color(Graph_lib::Color::red);
  win.attach(c_2);
  
  Graph_lib::Circle c_3{Graph_lib::Point{150,150}, 50};
  c_3.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 10));
  c_3.set_color(Graph_lib::Color::yellow);
  win.attach(c_3);
  
  Graph_lib::Circle c_4{Graph_lib::Point{260,150}, 50};
  c_4.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 10));
  c_4.set_color(Graph_lib::Color::green);
  win.attach(c_4);
  
  win.wait_for_button();
}
