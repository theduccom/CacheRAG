#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string s;
int id;

int exp();
int term();
int fact();

int exp()
{
	int r = term();
	while(true)
	{
		char c = s[id++];
		if(c == '+')r += term();
		else if(c == '-')r -= term();
		else break;
	}
	return r;
}

int term()
{
	int r = fact();
	while(true)
	{
		char c = s[id++];
		if(c=='*') r*=fact();
		else if(c=='/')r/=fact();
		else break;
	}
	id--;
	return r;
}

int fact()
{
	char c = s[id++];
	if(c=='(')return exp();
	if(c=='-')
	{
		return -fact();
	}
	if(c=='+')
	{
		return fact();
	}
	int x = c-'0';
	while(true)
	{
		c = s[id++];
		if('0' <= c && c <= '9')
		{
			x *= 10;
			x += c-'0';
		}
		else break;
	}
	id--;
	return x;
}

void solve()
{
	int N;
	scanf("%d\n", &N);
	while(N--)
	{
		getline(cin, s);
		id = 0;
		cout << exp() << endl;
	}
}

int main()
{
	solve();
	return(0);
}