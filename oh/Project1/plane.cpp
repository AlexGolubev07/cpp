#include "plane.h"
#include <string>
#include <iostream>
#include <cmath>
// #include <boost/format.hpp>

using namespace std;

namespace plane
{
	namespace point
	{
		double distanceBetweenPoints(Point const& p1, Point const& p2)
		{
			double x = p2.x - p1.x;
			x *= x;
			double y = p2.y - p1.y;
			y *= y;
			return sqrt(x + y);
		}

		Point::Point(int const x, int const y)
		{
			this->x = x;
			this->y = y;
		}

		Point shift(Point const& origin, Point const& p)
		{
			Point result;
			result.x = p.x - origin.x;
			result.y = p.y - origin.y;
			return result;
		}

		Point rotation(double const cosinus, double const sinus, Point const& p)
		{
			Point result;
			result.x = p.x * cosinus + p.y * sinus;
			result.y = -p.x * sinus + p.y * cosinus;
			return result;
		}

		string pointToString(Point const& p)
		{
			return "(" + to_string(p.x) + "; " + to_string(p.y) + ")";
		}

		std::ostream& operator << (std::ostream& os, Point const& p)
		{
			return os << "(" << p.x << "; " << p.y << ")";
		}

		std::istream& operator>> (std::istream& in, Point& p)
		{
			in >> p.x >> p.y;

			return in;
		}

		bool operator== (Point const& p1, Point const& p2)
		{
			return ((p1.x == p2.x) && (p1.y == p2.y));
		}
	}
	// end of point namespace
}