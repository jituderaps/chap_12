#include "Graph.h"
#include "Simple_window2.h"

Graph_lib::Rectangle DrawRectangle(Graph_lib::Point p) {
  Graph_lib::Rectangle r{p, 200,60};
  r.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 3));
  r.set_fill_color(Graph_lib::Color::yellow);

  return r;
}

Graph_lib::Text DrawText(Graph_lib::Point p, string s) {
  Graph_lib::Text t{p, s};

  return t;
}

Graph_lib::Line DrawLine(Graph_lib::Point origin, Graph_lib::Point insertion) {
  Graph_lib::Line l{origin, insertion};
  l.set_style(Graph_lib::Line_style(Graph_lib::Line_style::solid, 2));

  return l;
}

int main() {
  Graph_lib::Simple_window win{Graph_lib::Point{100, 100}, 800, 800, "Get It To Run"};

  vector<Graph_lib::Rectangle> rec_vec{
          DrawRectangle(Graph_lib::Point{100, 700}),    // chap12.cpp
          DrawRectangle(Graph_lib::Point{250, 550}),    // Simple_window.h
          DrawRectangle(Graph_lib::Point{10,  520}),    // Graph.cpp
          DrawRectangle(Graph_lib::Point{500, 520}),    // GUI.cpp
          DrawRectangle(Graph_lib::Point{220, 420}),    // window.cpp
          DrawRectangle(Graph_lib::Point{500, 400}),    // GUI.h
          DrawRectangle(Graph_lib::Point{80, 300}),     // Graph.h
          DrawRectangle(Graph_lib::Point{340, 260}),    // window.h
          DrawRectangle(Graph_lib::Point{80, 160}),     // Point.h
          DrawRectangle(Graph_lib::Point{300, 80}),     // fltk headers
          DrawRectangle(Graph_lib::Point{550, 120}) };   // fltk code

  for (int i = 0; i < rec_vec.size(); ++i) {
    win.attach(rec_vec[i]);
  }

  vector<Graph_lib::Text> text_vec {
          DrawText(Graph_lib::Point{100, 690 }, "chapter12.cpp"),
          DrawText(Graph_lib::Point{105, 720 }, "#include ""Graph.h"" "),
          DrawText(Graph_lib::Point{105, 735 }, "#include ""Simple_window.h"" "),
          DrawText(Graph_lib::Point{105, 750 }, "int main() {...}"), 
          
          DrawText(Graph_lib::Point{250, 540 }, "Simple_window.h"),
          DrawText(Graph_lib::Point{255, 570 }, "// window interface:"),
          DrawText(Graph_lib::Point{255, 585 }, "class Simple_window{...}"),
          DrawText(Graph_lib::Point{255, 600 }, "..."),
          
          DrawText(Graph_lib::Point{10, 510 }, "Graph.cpp"),
          DrawText(Graph_lib::Point{15, 540 }, "Graph code"),

          DrawText(Graph_lib::Point{500, 510 }, "GUI.cpp"),
          DrawText(Graph_lib::Point{505, 540 }, "GUI code"),

          DrawText(Graph_lib::Point{220, 410 }, "window.cpp"),
          DrawText(Graph_lib::Point{225, 440 }, "Window code"),
          
          DrawText(Graph_lib::Point{500, 390 }, "GUI.h"),
          DrawText(Graph_lib::Point{505, 420 }, "// GUI interface:"),
          DrawText(Graph_lib::Point{505, 435 }, "struct In_box{...};"),
          DrawText(Graph_lib::Point{505, 450 }, "..."),

          DrawText(Graph_lib::Point{85, 290 }, "Graph.h"),
          DrawText(Graph_lib::Point{90, 320 }, "// graphing interface:"),
          DrawText(Graph_lib::Point{90, 335 }, "struct shape{...};"),
          DrawText(Graph_lib::Point{90, 350 }, "..."), 
 
          DrawText(Graph_lib::Point{335, 250 }, "Window.h"),
          DrawText(Graph_lib::Point{345, 280 }, "// Window interface:"),
          DrawText(Graph_lib::Point{345, 295 }, "class Window{...};"),
          DrawText(Graph_lib::Point{345, 305 }, "..."),  
 
          DrawText(Graph_lib::Point{75, 150 }, "Point.h"), 
          DrawText(Graph_lib::Point{85, 180 }, "struct Point {...}"), 

          DrawText(Graph_lib::Point{305, 110}, "FLTK headers"),  

          DrawText(Graph_lib::Point{555, 150}, "FLTK code"),  };
 
  for (int i = 0; i < text_vec.size(); ++i)
    win.attach(text_vec[i]);

  vector<Graph_lib::Line> line_vec {
          DrawLine(Graph_lib::Point{180, 700}, Graph_lib::Point{300, 610}),
          DrawLine(Graph_lib::Point{180, 700}, Graph_lib::Point{100, 360}),
          
          DrawLine(Graph_lib::Point{120, 520}, Graph_lib::Point{95, 360}),
  
          DrawLine(Graph_lib::Point{430, 550}, Graph_lib::Point{440, 320}),
          DrawLine(Graph_lib::Point{430, 550}, Graph_lib::Point{550, 460}),

          DrawLine(Graph_lib::Point{600, 520}, Graph_lib::Point{555, 460}),
          
          DrawLine(Graph_lib::Point{350, 420}, Graph_lib::Point{435, 320}),
          
          DrawLine(Graph_lib::Point{200, 300}, Graph_lib::Point{200, 220}),
          DrawLine(Graph_lib::Point{200, 300}, Graph_lib::Point{350, 140}), 
          
          DrawLine(Graph_lib::Point{680, 400}, Graph_lib::Point{480, 140}),
          DrawLine(Graph_lib::Point{680, 400}, Graph_lib::Point{500, 320}),

          DrawLine(Graph_lib::Point{440, 260}, Graph_lib::Point{210, 220}),
          DrawLine(Graph_lib::Point{440, 260}, Graph_lib::Point{440, 140}),
          
          DrawLine(Graph_lib::Point{550, 150}, Graph_lib::Point{500, 110}),
  };

  for (int i = 0; i < line_vec.size(); ++i)
    win.attach(line_vec[i]);

  win.wait_for_button();

}
