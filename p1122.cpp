#include"p1122.h"


vector<int> Solution_p1122::relativeSortArray(vector<int>& arr1, vector<int>& arr2)
{
	map<int, int> arr2_map;
	vector<int> rest;
	vector<int> rst;
	for (auto i : arr2)
	{
		arr2_map[i] = 0;
	}

	for (auto j : arr1)
	{
		if (find(arr2.begin(), arr2.end(), j) != arr2.end())
		{
			++arr2_map[j];
		}
		else
		{
			rest.push_back(j);
		}
	}

	for (auto k : arr2)
	{
		while (arr2_map[k] != 0)
		{
			rst.push_back(k);
			--arr2_map[k];
		}
	}

	sort(rest.begin(), rest.end());
	
	rst.insert(rst.end(), rest.begin(), rest.end());

	return rst;

}