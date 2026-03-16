#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <iostream>
#include <sstream>
#include <climits>
#include <cfloat>
#include <complex>

using namespace std;

int w, h;
int b[101][101];
int xg, yg;
bool is_reachable(int x, int y, int c)
{
	if (x < 1 || y < 1 || x > w || y > h || b[y][x] != c)
		return false;
	if (x == xg && y == yg)
		return true;
	b[y][x] = -1;
	int dx[] = { 0, 1, 0, -1 };
	int dy[] = { -1, 0, 1, 0 };
	bool res = false;
	for (int i = 0; i < 4 && !res; ++i)
		res = is_reachable(x+dx[i], y+dy[i], c);
	return res;
}
int main()
{
	while (scanf("%d %d", &w, &h), w | h)
	{
		int xs, ys;
		scanf("%d %d %d %d", &xs, &ys, &xg, &yg);
		int n;
		scanf("%d", &n);
		memset(b, -1, sizeof(b));
		for (int i = 0; i < n; ++i)
		{
			int c, d, x, y;
			scanf("%d %d %d %d", &c, &d, &x, &y);
			int w[2][2] = { { 2, 4 }, { 4, 2 } };
			for (int j = 0; j < w[d][0]; ++j)
				for (int k = 0; k < w[d][1]; ++k)
					b[y+j][x+k] = c;
		}
		if (b[ys][xs] != -1 && is_reachable(xs, ys, b[ys][xs]))
			puts("OK");
		else
			puts("NG");
	}

	return 0;
}