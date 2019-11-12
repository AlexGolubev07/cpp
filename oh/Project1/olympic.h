#pragma once

#include <iostream>
#include "plane.h"

using namespace std;

namespace olympic
{
	namespace year2018
	{
		namespace class9
		{
			string beauty(string name);
		}
	}

	namespace year2019
	{
		namespace class9
		{
			string primeSum(int const number, int const amount = 3);

			string frekenBok(plane::point::Point freken, plane::point::Point malysh, plane::point::Point karlson);
		}
	}
}