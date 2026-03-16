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
#include <climits>
#include <map>
#include <stack>
using namespace std;
#define M_PI 3.141592
#define toRad 2.0*M_PI/360.0
#define inin(x) int x;cin>>x;
#define all(x) x.begin(),x.end()
#define debug(x) cout<<#x<<" "<<x<<endl;
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define first second
#define second first
typedef pair<int, int> pii;
int w, n;
pii memo[1000][1200];
vector<pii> a;
pii dp(int num, int W)
{
	if (W > w)return pii(INT_MIN, INT_MAX);
	if (num == n)return pii(0, 0);
	if (memo[num][W].first != -1)return memo[num][W];
	pii ans;
	if (dp(num + 1, W).first == dp(num + 1, W + a[num].second).first + a[num].first)
	{
		if (dp(num + 1, W).second < dp(num + 1, W + a[num].second).second)
		{
			ans = dp(num + 1, W);
		}
		else
		{
			pii p = dp(num + 1, W + a[num].second);
			p.first += a[num].first;
			p.second += a[num].second;
			ans = p;
		}
	}
	else if (dp(num + 1, W).first > dp(num + 1, W + a[num].second).first + a[num].first)
	{
		ans = dp(num + 1, W);
	}
	else
	{
		pii p = dp(num + 1, W + a[num].second);
		p.first += a[num].first;
		p.second += a[num].second;
		ans = p;

	}
	return memo[num][W] = ans;
}

int main()
{
	int Case = 0;
	while (cin >> w&&w&&++Case)
	{
		memset(memo, -1, sizeof memo);
		a.clear();
		cin >> n;
		rep(i, n)
		{
			pii x;
			scanf("%d,%d", &x.first, &x.second);
			a.push_back(x);
		}
		sort(all(a));
		pii val = dp(0, 0), wei;
		cout << "Case " << Case << ":" << endl;
		cout << val.first << endl << val.second << endl;
	}
}