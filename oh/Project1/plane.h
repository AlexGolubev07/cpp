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
			Point(int const x = 0, int const y = 0);

			double x;
			double y;
		};

		double distanceBetweenPoints(Point const& p1, Point const& p2);

		Point shift(Point const & origin, Point const & p);

		Point rotation(double const cos, double const sin, Point const & p);

		std::string pointToString(Point const & p);

		std::ostream & operator<< (std::ostream & os, Point const & p);

		std::istream & operator>> (std::istream & in, Point & p);

		bool operator== (Point const& p1, Point const& p2);
	}
}