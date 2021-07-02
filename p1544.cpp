#include "p1544.h"

string Solution_p1544::makeGood(string s)
{
	stack<char> ss;
	string rst = "";
	int current_pos = 0;

	while (current_pos < s.size())
	{
		if (!ss.empty())
		{
			if ((tolower(s[current_pos]) == tolower(ss.top())) && (s[current_pos] != ss.top()))
			{
				ss.pop();
			}
			else
			{
				ss.push(s[current_pos]);
			}

			++current_pos;

		}
		else
		{
			ss.push(s[current_pos]);
			++current_pos;
		}
	}

	while (!ss.empty())
	{
		rst = rst + ss.top();
		ss.pop();
	}

	reverse(rst.begin(),rst.end());

	return rst;





}