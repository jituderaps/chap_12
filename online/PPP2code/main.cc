#include "Simple_window.h"
#include "Graph.h"
#include <random>
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <cmath>

using namespace Graph_lib;

Graph_lib::Point superellipse(double deg, const double a,
	const double b, const double m, const double n);
void draw_star(Graph_lib::Point center, double a, double b,double m, double n, int revolution, Open_polyline& openpl);

int main()
{
	using namespace std;

	Point tl{ 100, 100 };
	constexpr int win_width = 800;
	constexpr int win_height = 600;
	Simple_window win{ tl, win_width, win_height, "Super-ellipse" };

	try
	{
		constexpr double a = 100.0;
		constexpr double b = 100.0;
		constexpr double m = 0.5;
		constexpr double n = 0.5;
		constexpr int revolution = 360;
		Graph_lib::Point center{ win_width / 2, win_height / 2 };


		vector<Graph_lib::Point> point_v;

		 Open_polyline openpl;
		for (int d = 0; d <= revolution; d++)
		{
			point_v.push_back(superellipse(d, a, b, m, n));
      Graph_lib::Point p1 = superellipse (d, a, b, m, n);
      openpl.add(Graph_lib::Point{p1.x + center.x, p1.y + center.y});

		}

                size_t N = point_v.size();
		for (int i = 0; i < N; i += 3)
		{
			draw_star(point_v[i],a,b,m,n,revolution,openpl);
		}

		openpl.set_color(Color::blue);
		openpl.set_style({ Line_style::solid, 2 });
		win.attach(openpl);
		win.wait_for_button();
	}
	catch (const runtime_error &e)
	{
		Text err_msg_start{ Point{300, 600}, "Runtime_error: " };
		Text err_msg{ Point{400, 600}, e.what() };
		err_msg_start.set_color(Color::black);
		err_msg.set_color(Color::black);

		win.attach(err_msg_start);
		win.attach(err_msg);
		win.wait_for_button();
	}
}

Graph_lib::Point superellipse(double deg, const double a,
	const double b, const double m, const double n)
{
	constexpr double pi = 3.14159265359;
	deg *= pi / 180.0;
	return Graph_lib::Point{
		int(a * pow(abs(sin(deg)), 2 / m) * (sin(deg) > 0 ? 1 : -1)),
		int(b * pow(abs(cos(deg)), 2 / n) * (cos(deg) > 0 ? 1 : -1))
	};
}

void draw_star(Graph_lib::Point center, double a, double b,double m, double n, int revolution, Open_polyline& openpl)
{
	using namespace Graph_lib;

	for (int d = 0; d <= revolution; d++)
    {
      Graph_lib::Point p1 = superellipse (d, a, b, m, n);
    openpl.add(Graph_lib::Point{p1.x + center.x, p1.y + center.y});
    }
}
