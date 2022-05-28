#include "Graph.h"

#include "Simple_window2.h"
int main() {

try {
//  using namespace Graph_lib;
  Graph_lib::Point tl{100, 100};

  Graph_lib::Simple_window win{tl, 600, 400, "canvas"};
  Graph_lib::Polygon poly;

  poly.add(Graph_lib::Point{300, 200});
  poly.add(Graph_lib::Point{300, 100});
  poly.add(Graph_lib::Point{400, 100});
  poly.add(Graph_lib::Point{400, 200});

  poly.set_color(Graph_lib::Color::red);
  win.set_label("hi");

  win.attach(poly);

  win.wait_for_button();
}
catch(std::exception& e) {
  std::cerr << "Exception : " << e.what();
  return -1;
}

}
