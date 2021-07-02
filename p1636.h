#include<vector>
#include<algorithm>
#include<map>
#include<iostream>
#include<unordered_map>

using namespace std;



class Solution_p1636
{
public:
	vector<int> frequencySort(vector<int>& nums);
	static bool cmp(const pair<int,int> &a, const pair<int,int> &b);
};