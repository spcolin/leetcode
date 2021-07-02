#include "p1046.h"

int Solution_p1046::lastStoneWeight(vector<int>& stones)
{
	priority_queue<int> q;
	for (auto i : stones)
	{
		q.push(i);
	}

	while (q.size() > 1)
	{
		auto a = q.top();
		q.pop();
		auto b = q.top();
		q.pop();

		if ((a - b) != 0)
		{
			q.push(abs(a - b));
		}
		
	}

	if (!q.empty())
	{
		return q.top();
	}
	else
	{
		return 0;
	}

}