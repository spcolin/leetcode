#include "p922.h"



vector<int> Solution_p922::sortArrayByParityII(vector<int>& nums)
{

	vector<int> rst(nums.size());
	int odd_pos = 1;
	int even_pos = 0;

	for (auto i : nums)
	{
		if (i % 2 == 0)
		{
			rst[even_pos] = i;
			even_pos += 2;
		}
		else
		{
			rst[odd_pos] = i;
			odd_pos += 2;
		}
	}

	return rst;



}