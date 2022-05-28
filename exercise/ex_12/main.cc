#include "Simple_window2.h"
#include "Graph.h"
#include <vector>

constexpr double kpi = 3.14159265;
Graph_lib::Point center{300, 300};

int sgn(double w) {
  if (w < 0)   return -1;
  if (w > 0)   return 1;
  if (w == 0)  return 0;
}

Vector<Graph_lib::Point> superellipse(double a, double b, double m, double n, int N) {
  double p = 2 * kpi / N;

  Vector<Graph_lib::Point> point_vec;

  for (int i = 1; i <= N; ++i) {
    double t = p * i;
    double x = pow(abs(cos(t)), 2 / m) * a * sgn(cos(t));
    double y = pow(abs(sin(t)), 2 / n) * b * sgn(sin(t));

    point_vec.push_back(Graph_lib::Point{int(x) + 300, int(y) + 200});
  }

  return point_vec;
}

int main(){
  Graph_lib::Simple_window win{Graph_lib::Point{100, 100}, 800, 600, "super ellipse"};

  Vector<Graph_lib::Point> point_vec = superellipse(100, 100, 0.5, 0.5, 5500 );

 Graph_lib::Lines line;
  int half = point_vec.size() / 2;

  for (int i = 0; i < half; ++i) {
    line.add(point_vec[i], point_vec[half + i]);
  }

  line.set_color(Graph_lib::Color::green);
   win.attach(line);
  win.wait_for_button();

}
