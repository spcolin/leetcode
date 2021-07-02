#include "P1710.h"

bool Solution_p1710::cmp(vector<int> a, vector<int> b)
{
	return a[1] > b[1];
}

int Solution_p1710::maximumUnits(vector<vector<int>>& boxTypes, int truckSize)
{
	sort(boxTypes.begin(), boxTypes.end(), Solution_p1710::cmp);

	int count = 0;
	int max = 0;

	auto i = boxTypes.begin();
	while (i != boxTypes.end())
	{
		if ((*i)[0] <= truckSize - count)
		{
			max += (*i)[0] * (*i)[1];
			count += (*i)[0];
		}
		else
		{
			max += (truckSize - count) * (*i)[1];
			break;
		}

		++i;
	}
	
	return max;


}