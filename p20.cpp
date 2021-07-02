#include "p20.h"


bool Solution_p20::isValid(string s)
{
	stack<char> ss;

	for (auto i = s.begin(); i != s.end(); ++i)
	{
		if (!ss.empty())
		{
			if (ss.top() == '(')
			{
				if ((*i == ']') || (*i == '}'))
				{
					return false;
				}
				else if (*i == ')')
				{
					ss.pop();
				}
				else
				{
					ss.push(*i);
				}
			}
			else if (ss.top() == '{')
			{
				if ((*i == ']') || (*i == ')'))
				{
					return false;
				}
				else if (*i == '}')
				{
					ss.pop();
				}
				else
				{
					ss.push(*i);
				}
			}
			else if (ss.top() == '[')
			{
				if ((*i == ')') || (*i == '}'))
				{
					return false;
				}
				else if (*i == ']')
				{
					ss.pop();
				}
				else
				{
					ss.push(*i);
				}
			}
			
		}
		else
		{
			if ((*i == '(') || (*i == '[') || (*i == '{'))
			{
				ss.push(*i);

			}
			else
			{
				return false;
			}

		}
	}


	if (!ss.empty())
	{
		return false;
	}
	else
	{
		return true;
	}

}