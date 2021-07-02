#include"p1491.h"



double Solution_p1491::average(vector<int>& salary)
{

	double sum = accumulate(salary.begin(), salary.end(), 0);
	double min = *(min_element(salary.begin(), salary.end()));
	double max = *(max_element(salary.begin(), salary.end()));


	sum = sum - min - max;

	return sum / (salary.size() - 2);

}