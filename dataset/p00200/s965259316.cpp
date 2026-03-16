#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
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

	int cost[101][101];
	int time_[101][101];

	while (1)
	{
		int n, m;
		cin >> n >> m; if (n == 0 && m == 0) break;
		REP(i, 101)REP(j, 101)
		{
			if (i == j)
			{
				cost[i][j] = 0;
				time_[i][j] = 0;
			}
			else
			{
				cost[i][j] = INF;
				time_[i][j] = INF;
			}
		}

		REP(i, n)
		{
			int a, b, c, t;
			cin >> a >> b >> c >> t;
			a--; b--;
			cost[a][b] = cost[b][a] = c;
			time_[a][b] = time_[b][a] = t;
		}

		REP(k, m)REP(i, m)REP(j, m)
		{
			cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
			time_[i][j] = min(time_[i][j], time_[i][k] + time_[k][j]);
		}
		int k;
		cin >> k;
		REP(i, k)
		{
			int p, q, r;
			cin >> p >> q >> r;
			p--; q--;
			if (r == 0) cout << cost[p][q] << endl;
			else cout << time_[p][q] << endl;
		}
	}
	return 0;
}