#include "Graph.h"
#include "Simple_window2.h"

int main() {

  Graph_lib::Simple_window win{Graph_lib::Point{100, 100}, 800, 600, "Tic Toc"};
  Graph_lib::Vector_ref<Graph_lib::Rectangle> vec_rec;

  int width = 50;
  for (int row = 0; row < 3; ++row) {
    for (int column = 0; column < 3; ++column) {
      vec_rec.push_back(new Graph_lib::Rectangle{Graph_lib::Point{100 + width * row, 100 + width * column}, 50, 50});

      int i = vec_rec.size() - 1;
      if (! (i % 2))
        vec_rec[i].set_fill_color(Graph_lib::Color::red);
      else
        vec_rec[i].set_fill_color(Graph_lib::Color::white);
    
      win.attach(vec_rec[i]);
    }
  }

  win.wait_for_button();
  
}
