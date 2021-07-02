#include "p1636.h"


bool Solution_p1636::cmp(const pair<int, int> &a,const pair<int, int> &b)
{
	if (a.second == b.second)
	{
		return a.first > b.first;
	}
	else
	{
		return a.second < b.second;
	}

}


vector<int> Solution_p1636::frequencySort(vector<int>& nums)
{
	map<int, int> count_map;
	
	vector<int> rst;

	for (auto i : nums)
	{
		if (count_map.find(i) == count_map.end())
		{
			count_map[i] = 1;
		}
		else
		{	
			++count_map[i];
		}
	}

	vector<pair<int, int>> count_vec(count_map.begin(),count_map.end());


	sort(count_vec.begin(), count_vec.end(), cmp);

	for (auto j = count_vec.begin(); j != count_vec.end(); ++j)
	{
		for (int k = 0; k < j->second; ++k)
		{
			rst.push_back(j->first);
		}
	}



	return rst;


}