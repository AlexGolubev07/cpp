#include <cassert>

namespace olimpic8
{
	int olega(int t, int d, int p)
	{
		assert(p % d == 0);

		for (int i = 0; i < t; ++i)
		{
			if ((t - i) * d + i * d * 2 == p)
				return i;
		}
		return -1;
	}
}