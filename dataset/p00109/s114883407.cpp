#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>
#include <ctime>
#include <cstdlib>

using namespace std;

inline int to_int(string s) {int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string to_str(T x) {ostringstream sout; sout << x; return sout.str();}

typedef long long ll;

/*
equation := equation + factor | factor
factor   := factor   * term   | term
term     := (equation) | Number 

↓

equation := factor (+ factor)*
factor   := term (* term)*
term     := (equation) | Number 
 */
int equation();
int term();
int factor();
int id;
string s;

int main()
{
	int n;
	cin >> n;
	
	while(n--)
	{
		cin >> s;
		id = 0;
		cout << equation() << endl;
	}
}

int equation()
{
	int left = term();
	while(s[id] == '+' || s[id] == '-')
	{
		if(s[id] == '+')
		{
			id++;
			int right = term();
			left += right;
		}
		if(s[id] == '-')
		{
			id++;
			int right = term();
			left -= right;
		}
	}
	return left;
}
int term()
{
	int left = factor();
	while(s[id] == '*' || s[id] == '/')
	{
		if(s[id] == '*')
		{
			id++;
			int right = factor();
			left *= right;
		}
		if(s[id] == '/')
		{
			id++;
			int right = factor();
			left /= right;
		}
	}
	return left;
}
int factor()
{
	char c = s[id];
	if(c == '(')
	{
		id++;
		int res = equation();
		id++;
		return res;
	}
	else
	{
		int res = 0;
		while(isdigit(s[id]))
		{
			res = res*10 + (s[id++]-'0');
		}
		return res;
	}
}