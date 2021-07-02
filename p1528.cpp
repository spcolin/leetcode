#include "p1528.h"



string Solution_p1528::restoreString(string s, vector<int>& indices)
{
	string rst(s.size(),' ');

	for (int i = 0; i < s.size(); ++i)
	{
		rst[indices[i]] = s[i];
	}

	return rst;
}