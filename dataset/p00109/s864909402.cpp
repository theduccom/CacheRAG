#include<iostream>
#include<string>
#include<cctype>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef string::const_iterator State;

int ctoi(const char &c)
{
	return c - '0';
}

int expression(State &);
int term(State &);
int factor(State &);
int number(State &);

int expression(State &itr)
{
	int ret=term(itr);

	while (true)
	{
		if (*itr == '+')
		{
			itr++;
			ret = ret + term(itr);
		}
		else if (*itr == '-')
		{
			itr++;
			ret = ret - term(itr);
		}
		else
		{
			break;
		}
	}

	return ret;
}

int term(State &itr)
{
	int ret=factor(itr);

	while (true)
	{
		if (*itr == '*')
		{
			itr++;
			ret = ret*factor(itr);
		}
		else if (*itr == '/')
		{
			itr++;
			ret = ret / factor(itr);
		}
		else
		{
			break;
		}
	}

	return ret;
}

int factor(State &itr)
{
	int ret;

	if (*itr == '(')
	{
		itr++;
		ret = expression(itr);
		itr++;
	}
	else
	{
		ret = number(itr);
	}

	return ret;
}

int number(State &itr)
{
	int ret = 0;

	while (isdigit(*itr))
	{
		ret *= 10;
		ret += ctoi(*itr);
		itr++;
	}

	return ret;
}

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	REP(i, n)
	{
		string str;
		getline(cin, str);
		State begin = str.begin();
		int ans = expression(begin);
		cout << ans << endl;
	}
	return 0;
}
