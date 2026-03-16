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

string isl[15];
int cnt;
int di[4] = { -1, 0, 0, 1 }; int dj[4] = { 0, -1, 1, 0 };

void dfs(int i, int j)
{
	if (i >= 0 && j >= 0 && i < 12 && j < 12)
	{
		if (isl[i][j] == '1')
		{
			isl[i][j] = '0';
			REP(k, 4) dfs(i + di[k], j + dj[k]);
		}
	}
}

int main()
{
	while (cin >>isl[0])
	{
		FOR(i, 1, 12) cin >> isl[i];
		cnt = 0;
		REP(i, 12)REP(j, 12)
		{
			if (isl[i][j] == '1')
			{
				cnt++;
				dfs(i, j);
			}
		}
		cout << cnt << endl;
	}
	return 0;
}