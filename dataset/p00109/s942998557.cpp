#include <iostream>
#include <string>
#include <cctype>
using namespace std;
typedef string::const_iterator State;

int factor(State &begin);

int number(State &begin)
{
	int ret = 0;

	while(isdigit(*begin))
	{
		ret *= 10;
		ret += *begin - '0';
		begin++;
	}

	return  ret;
}

int term(State &begin)
{
	int ret = factor(begin);
	while(true)
	{
		if(*begin == '*')
		{
			begin++;
			ret *= factor(begin);
		}
		else if(*begin == '/')
		{
			begin++;
			ret /= factor(begin);
		}
		else
		{
			break;
		}
	}

	return ret;
}

int expression(State &begin)
{
	int ret = term(begin);

	while(true)
	{
		if(*begin == '+')
		{
			begin++;
			ret += term(begin);
		}
		else if(*begin == '-')
		{
			begin++;
			ret -= term(begin);
		}
		else
		{
			break;
		}
	}
	
	return ret;
}


int factor(State &begin)
{
	int ret;

	if(*begin == '(')
	{
		begin++;
		ret = expression(begin);
		begin++;
	}
	else
	{
		ret = number(begin);
	}

	return ret;
}


int main()
{
	int n;
	cin >> n;
	cin.ignore();
	while(n--)
	{
		string s;
		getline(cin,s);

		State begin = s.begin();
		int ans = expression(begin);
		cout << ans << endl;
	}
	return 0;
}