#include "p1502.h"

bool Solution_p1502::canMakeArithmeticProgression(vector<int>& arr)
{
	sort(arr.begin(), arr.end());

	int interval = *(arr.begin())-*(arr.begin()+1);
	for (auto i = arr.begin()+1; i != arr.end()-1; ++i)
	{
		if (*(i)-*(i + 1) != interval)
		{
			return false;
		}
	}

	return true;



}