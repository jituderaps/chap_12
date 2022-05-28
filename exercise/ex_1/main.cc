#include "Graph.h"
#include "Simple_window2.h"

int main() {
  Graph_lib::Simple_window win{Graph_lib::Point{100, 100}, 800, 600, "Exercise 1"};

  Graph_lib::Rectangle rect{Graph_lib::Point{200, 200}, 100, 50};
  rect.set_color(Graph_lib::Color::blue);
  win.attach(rect);
  
  Graph_lib::Polygon poly_rect;
  poly_rect.add(Graph_lib::Point{400, 200});
  poly_rect.add(Graph_lib::Point{500, 200});
  poly_rect.add(Graph_lib::Point{500, 250});
  poly_rect.add(Graph_lib::Point{400, 250});
  poly_rect.set_color(Graph_lib::Color::red);
  win.attach(poly_rect);
  
  Graph_lib::Rectangle rec_2{Graph_lib::Point{200, 300}, 100, 30};
  win.attach(rec_2);

  Graph_lib::Text t_0{Graph_lib::Point{220, 320}, "Howdy!"};
  win.attach(t_0);

  Graph_lib::Text name_0{Graph_lib::Point{100, 100},"J"};
  name_0.set_font(Graph_lib::Font::times_bold);
  name_0.set_color(Graph_lib::Color::blue);
  name_0.set_font_size(50);
  win.attach(name_0);

  Graph_lib::Text name_1{Graph_lib::Point{100, 150},"I"};
  name_1.set_font(Graph_lib::Font::times_bold);
  name_1.set_color(Graph_lib::Color::green);
  name_1.set_font_size(50);
  win.attach(name_1);
  
  Graph_lib::Text name_2{Graph_lib::Point{100, 200},"T"};
  name_2.set_font(Graph_lib::Font::times_bold);
  name_2.set_color(Graph_lib::Color::yellow);
  name_2.set_font_size(50);
  win.attach(name_2);

  Graph_lib::Line l_h_0{Graph_lib::Point{400, 400}, Graph_lib::Point{600, 400}};
  l_h_0.set_style(Graph_lib::Line_style(Graph_lib::Line_style::dash, 0));
  win.attach(l_h_0);
 
  Graph_lib::Line l_h_1{Graph_lib::Point{400, 450}, Graph_lib::Point{600, 450}};
  l_h_1.set_style(Graph_lib::Line_style(Graph_lib::Line_style::dash, 0));
  win.attach(l_h_1); 

  Graph_lib::Line l_v_0{Graph_lib::Point{475, 325}, Graph_lib::Point{475, 525}};
  win.attach(l_v_0);
 
  Graph_lib::Line l_v_1{Graph_lib::Point{525, 325}, Graph_lib::Point{525, 525}};
  win.attach(l_v_1); 

  win.wait_for_button();
}
