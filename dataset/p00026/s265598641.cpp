#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;
int main ()
{
	int m[18][18] = {};
	int x, y, s;
	int dx1[4] = {0, 1, 0, -1}, dy1[4] = {1, 0, -1, 0};
	int dx2[8] = {0, 1, 1, 1, 0, -1, -1, -1}, dy2[8] = {1, 1, 0, -1, -1, -1, 0, 1};
	int dx3[12] = {0, -1, 0, 1, -2, -1, 1, 2, -1, 0, 1, 0}, dy3[12] = {2, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -2};
	while (scanf("%d,%d,%d", &x, &y, &s) != EOF)
	{
		x += 3;
		y += 3;
		m[x][y]++;
		switch (s)
		{
		case 1:
			for (int i = 0; i < 4; i++)m[x + dx1[i]][y + dy1[i]]++;
			break;
		case 2:
			for (int i = 0; i < 8; i++)m[x + dx2[i]][y + dy2[i]]++;
			break;
		case 3:
			for (int i = 0; i < 12; i++)m[x + dx3[i]][y + dy3[i]]++;
			break;
		}
	}
	int ans1 = 0, ans2 = 0;
	for (int x = 3; x <13; x++)
	{
		for (int y = 3; y < 13; y++)
		{
			if (m[x][y] == 0)ans1++;
			ans2 = max(ans2, m[x][y]);
		}
	}
	cout << ans1 << endl << ans2 << endl;
	return 0;
}