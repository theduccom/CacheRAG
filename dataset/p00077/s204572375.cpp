#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <queue>
#include <sstream>
#include <climits>
#include <cmath>
#include <functional>
#include <map>
#include <stack>
using namespace std;
#define M_PI 3.141592
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define FORI(i,k,n) for(int i=k;i<(int)n;i++)
#define toRad 2.0*M_PI/360.0
#define inin(x) int x;cin>>x;
#define all(x) x.begin(),x.end()
#define debug(x) cout<<#x<<" "<<x<<endl;
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define EPS 1e-12
#define pri_max 60000
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

/*
bool memo[pri_max] = {};
vector<int> pri;
void calc()
{
	for (int i = 2; i < pri_max; i++)
	{
		if (memo[i] == false)
		{
			pri.push_back(i);
			for (int l = i; l < pri_max; l += i)
			{
				memo[l] = true;
			}
		}
	}
}*/

int main()
{
	string s;
	while (cin >> s)
	{
		FOR(i, s.size())
		{
			if (s[i] == '@')
			{
				FOR(l, s[i + 1] - '0')
				{
					cout << s[i + 2];
				}
				i += 2;
			}
			else
			{
				cout << s[i];
			}
		}
		cout << endl;
	}
}