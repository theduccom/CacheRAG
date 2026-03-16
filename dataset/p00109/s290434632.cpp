#include <iostream>
#include <string>
using namespace std;

int n;
string str;
int number(int& i);
int term(int& i);
int expression(int& i);
int factor(int& i);

int number(int& i)
{
	int ret = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		ret *= 10;
		ret += str[i] - '0';
		i++;
	}
	return ret;
}

int term(int& i)
{
	int ret = factor(i);
	while (true)
	{
		if (str[i] == '*')
		{
			i++;
			ret *= factor(i);
		}
		else if (str[i] == '/')
		{
			i++;
			ret /= factor(i);
		}
		else
		{
			break;
		}
	}
	return ret;
}

int expression(int& i)
{
	int ret = term(i);
	while (true)
	{
		if (str[i] == '+')
		{
			i++;
			ret += term(i);
		}
		else if (str[i] == '-')
		{
			i++;
			ret -= term(i);
		}
		else
		{
			break;
		}
	}
	return ret;
}

int factor(int& i)
{
	int ret = 0;
	if (str[i] == '(')
	{
		i++;
		ret = expression(i);
		i++;
	}
	else
	{
		ret = number(i);
	}
	return ret;
}

int main()
{
	cin >> n;
	while (n--)
	{
		cin >> str;
		int i = 0;
		cout << expression(i) << endl;
	}
	return 0;
}