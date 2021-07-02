#include "p1403.h"



vector<int> Solution_p1403::minSubsequence(vector<int>& nums)
{

	

	if (nums.size() == 1)
	{
		return nums;
	}
	else
	{

		int sum = accumulate(nums.begin(), nums.end(), 0);

		sort(nums.begin(), nums.end(), greater<int>());

		int target = 0;

		auto p = nums.begin();

		for (auto i = nums.begin(); i != nums.end(); ++i)
		{
			target = accumulate(nums.begin(), i + 1, 0);
			if (target > (sum - target))
			{
				p = i + 1;
				break;
			}
		}


		return vector<int>(nums.begin(), p );
	}


}