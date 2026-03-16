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

int i, j, s;
int p[15][15];

void nuri(int i, int j)
{
	if (i >= 0 && i < 10 && j >= 0 && j < 10) p[i][j]++;
}

void shou(int i, int j)
{
	nuri(i, j);
	nuri(i - 1, j);
	nuri(i, j - 1);
	nuri(i, j + 1);
	nuri(i + 1, j);
}

void chu(int i, int j)
{
	shou(i, j);
	nuri(i - 1, j - 1);
	nuri(i - 1, j + 1);
	nuri(i + 1, j - 1);
	nuri(i + 1, j + 1);
}

void dai(int i, int j)
{
	chu(i, j);
	nuri(i - 2, j);
	nuri(i, j - 2);
	nuri(i, j + 2);
	nuri(i + 2, j);
}

int main()
{
	REP(i, 15)REP(j, 15) p[i][j] = 0;
	while (scanf("%d,%d,%d", &i, &j, &s) != EOF)
	{
		if (s == 1) shou(i, j);
		if (s == 2) chu(i, j);
		if (s == 3) dai(i, j);
	}
	int cnt = 0; int mx = 0;
	REP(i, 10)REP(j, 10)
	{
		if (p[i][j] == 0) cnt++;
		mx = max(p[i][j], mx);
	}
	cout << cnt << endl << mx << endl;
	return 0;
}