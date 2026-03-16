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
#include <map>
#include <stack>
using namespace std;
#define M_PI 3.141592
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
	while (1)
	{
		bool m[14][14] = {};
		int ans = 0;
		for (int i = 1; i <= 12; i++)
		{
			string s;
			if (cin >> s); else return 0;
			for (int l = 0; l < 12; l++)
			{
				m[i][l+1] = s[l] == '1';
			}
		}
		for (int i = 1; i <= 12; i++)
		{
			for (int l = 1; l <= 12; l++)
			{
				if (m[i][l])
				{
					ans++;
					m[i][l] = false;
					queue<pii> que;
					que.push(pii(i, l));
					while (!que.empty())
					{
						pii now = que.front(); que.pop();
						for (int k = 0; k < 4; k++)
						{
							int x = now.first + dx[k];
							int y = now.second + dy[k];
							if (m[x][y])
							{
								m[x][y] = false;
								que.push(pii(x, y));
							}
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
}