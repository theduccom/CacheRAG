#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <string>
#include <ctype.h>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <functional>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long
//#define scanf scanf_s

int main()
{
	int n, m;
	while (cin >> n >> m, n)
	{
		int cost[105][105]; int time[105][105];
		REP(i, m)REP(j, m)
		{
			if (i == j)
			{
				cost[i][j] = 0;
				time[i][j] = 0;
			}
			else
			{
				cost[i][j] = INF;
				time[i][j] = INF;
			}
		}
		int a, b, c, t;
		REP(i, n)
		{
			cin >> a >> b >> c >> t;
			a--; b--;
			cost[a][b] = c; cost[b][a] = c;
			time[a][b] = t; time[b][a] = t;
		}
		REP(k, m)REP(i, m)REP(j, m)
		{
			cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
			time[i][j] = min(time[i][j], time[i][k] + time[k][j]);
		}
		int	q;
		cin >> q;
		REP(i, q)
		{
			cin >> a >> b >> c;
			a--; b--;
			if (c) cout << time[a][b] << endl;
			else cout << cost[b][a] << endl;
		}
	}
	return 0;
}