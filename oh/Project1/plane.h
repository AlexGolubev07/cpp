#pragma once
#include <string>
#include <iostream>
// #include <boost/format.hpp>

namespace plane
{
	namespace point
	{
		struct Point
		{
			double x;
			double y;
		};

		int distanceBetweenPoints(Point p1, Point p2)
		{
			double x = p2.x - p1.x;
			x *= x;
			double y = p2.y - p1.y;
			y *= y;
			return sqrt(x + y);
		}

		string pointToString(Point p)
		{
			return "(" + to_string(p.x) + "; " + to_string(p.y) + ")";
		}

		std::ostream& operator << (std::ostream& os, Point p)
		{
			return os << "(" << p.x << "; " << p.y << ")";
		}
	}
}