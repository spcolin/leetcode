#include"p1356.h"



bool Solution_p1356::cmp(vector<int> a, vector<int> b)
{
	if (a[1] == b[1])
	{
		return a[0] < b[0];
	}
	return a[1] < b[1];

}



vector<int> Solution_p1356::sortByBits(vector<int>& arr)
{

	vector<vector<int>> binary_arr;
	vector<int> rst;
	int num = 0;
	int count = 0;

	for (auto i : arr)
	{
		num = i;
		count = 0;

		while (num > 0)
		{
			if (num % 2 != 0)
			{
				++count;
			}
			num = num / 2;
		}

		binary_arr.push_back(vector<int> { i,count });
	}


	sort(binary_arr.begin(), binary_arr.end(), Solution_p1356::cmp);


	for (auto j : binary_arr)
	{
		rst.push_back(j[0]);
	}


	return rst;



}