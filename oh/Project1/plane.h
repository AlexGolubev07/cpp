#pragma once
#include <string>
#include <iostream>
#include <cmath>
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

		int distanceBetweenPoints(Point const & p1, Point const & p2)
		{
			double x = p2.x - p1.x;
			x *= x;
			double y = p2.y - p1.y;
			y *= y;
			return sqrt(x + y);
		}

		Point & shift(Point const & origin, Point const & p)
		{
			Point result;
			result.x = p.x - origin.x;
			result.y = p.y - origin.y;
			return result;
		}

		Point & rotation(double const cos, double const sin, Point const & p)
		{
			Point result;
			result.x = p.x * cos - p.y * sin;
			result.y = p.x * sin + p.y * cos;
			return result;
		}

		string pointToString(Point const & p)
		{
			return "(" + to_string(p.x) + "; " + to_string(p.y) + ")";
		}

		std::ostream& operator << (std::ostream& os, Point const & p)
		{
			return os << "(" << p.x << "; " << p.y << ")";
		}
	}
}