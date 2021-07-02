#include "p1030.h"


vector<int> Solution_p1030::target = { 0,0 };


bool Solution_p1030::cmp(vector<int> a, vector<int> b)
{
	return abs(a[0] - target[0]) + abs(a[1] - target[1]) < abs(b[0] - target[0]) + abs(b[1] - target[1]);
}



vector<vector<int>> Solution_p1030::allCellsDistOrder(int R, int C, int r0, int c0)
{
	


	target[0] = r0;
	target[1] = c0;

	vector<vector<int>> rst;

	for (int row = 0; row < R; ++row)
	{
		for (int col = 0; col < C; ++col)
		{
			rst.push_back({ row,col });
		}
	}


	sort(rst.begin(), rst.end(), cmp);


	return rst;


}