#include <cstdio>
#include <string> 
#include <algorithm>
#include <iostream>
using namespace std;
typedef string::iterator State;
bool isdigit(State& pos);
int number(State& pos);
int factor(State& pos);
int expression(State& pos);
int term(State& pos);

bool isdigit(State& pos)
{
	if('0'<=*pos&&*pos<='9')return true;
	else return false;
}
int number(State& pos)
{
	int res = 0;
	while(isdigit(pos))
	{
		res*=10;
		res += (*pos)-'0';
		pos++;
	}
	return res;
}
int term(State& pos)
{
	int ret = factor(pos);
	while(*pos == '*'||*pos == '/')
	{
		bool mul = (*pos == '*');
		pos++;
		int k = factor(pos);
		if(mul)ret *= k;
		else ret/=k;
	}
	return ret;
}
int factor(State& pos)
{
	int ret;
	if(*pos=='(')
	{
		pos++;
		ret = expression(pos);
		pos++;
	}
	else ret = number(pos);
	return ret;
}
int expression(State& pos)
{
	int ret = term(pos);
	while(*pos == '+'||*pos == '-')
	{
		bool plus = (*pos == '+');
		pos++;
		int k = term(pos);
		if(plus)ret += k;
		else ret -= k;
	}
	return ret;
}
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		State pos = s.begin();
		cout << expression(pos) << endl;
	}
	return 0;
}