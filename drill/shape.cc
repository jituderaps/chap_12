#include <sstream>
#include "Graph.h"
#include "Simple_window2.h"

int main() {

try {
  Graph_lib::Point tl{100, 100};
  Graph_lib::Simple_window win{tl, 800, 600, "Graph"};

  Graph_lib::Axis xa{Graph_lib::Axis::x, Graph_lib::Point{100, 500}, 400, 15, "x-beta G"};
  Graph_lib::Axis ya{Graph_lib::Axis::y, Graph_lib::Point{100, 500}, 400, 15, "y_beta G"};

  Graph_lib::Function sine{sin, 0, 100, Graph_lib::Point(100, 250), 500, 3, 3};

  Graph_lib::Polygon poly;
  poly.add(Graph_lib::Point{500, 200});
  poly.add(Graph_lib::Point{450, 300});
  poly.add(Graph_lib::Point{550, 300});

  Graph_lib::Rectangle rect{Graph_lib::Point{350,300}, 100, 50};
  //rect.set_style(Graph_lib::Line_style::dot);

  Graph_lib::Closed_polyline poly_rect;
  poly_rect.add(Graph_lib::Point{150, 150});
  poly_rect.add(Graph_lib::Point{250, 150});
  poly_rect.add(Graph_lib::Point{275, 180});
  poly_rect.add(Graph_lib::Point{250, 200});
  poly_rect.add(Graph_lib::Point{150, 200});

  //xa.set_color(Graph_lib::Color::red);
  //ya.set_color(Graph_lib::Color::red);

  xa.label.set_color(Graph_lib::Color::red);
  ya.label.set_color(Graph_lib::Color::blue);
  sine.set_color(Graph_lib::Color::yellow);
  poly.set_color(Graph_lib::Color::black);

  poly_rect.set_fill_color(Graph_lib::Color::green);
  rect.set_fill_color(Graph_lib::Color::blue);
  poly.set_fill_color(Graph_lib::Color::black);

  poly.set_style(Graph_lib::Line_style::dot);
  poly_rect.set_style(Graph_lib::Line_style(Graph_lib::Line_style::dash, 4));
 // rect.set_style(Graph_lib::Line_style(Graph_lib::Line_style::dash, 4));
  poly.set_style(Graph_lib::Line_style(Graph_lib::Line_style::dot, 5));

  poly_rect.set_color(Graph_lib::Color::blue);
  rect.set_color(Graph_lib::Color::green);
  poly.set_color(Graph_lib::Color::blue);

  win.set_label("X-Y Graph");

  Graph_lib::Text t{Graph_lib::Point{155, 180}, "hi babes"};
  Graph_lib::Image i{Graph_lib::Point{300, 0}, "hi.jpg"};

  t.set_font(Graph_lib::Font::times_bold);
  t.set_font_size(20);

  
  std::ostringstream oss;

  oss << "Screen size : " << Graph_lib::x_max() << ", " << Graph_lib::y_max()
      << "window size : " << win.x_max() << ", " << win.y_max();

  Graph_lib::Text t_size{Graph_lib::Point{200, 15}, oss.str()};

  win.attach(xa);
  win.attach(ya);
  win.attach(sine);
  win.attach(poly);
  win.attach(rect);
  win.attach(poly_rect);
  win.attach(t);
  win.attach(i);
  win.attach(t_size);

  win.wait_for_button();
}
catch (std::exception& e) {
  std::cerr << "exception : " << e.what();
  return -1;
}
  
  return 0;
}
