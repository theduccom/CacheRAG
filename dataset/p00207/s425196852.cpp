#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

#define size_max 100+10

#define Y first
#define X second

int map[size_max][size_max];

int mx[4] = { 1,-1,0,0 };
int my[4] = { 0,0,1,-1 };

void paint(int c, int y, int x, int H, int W)
{
	int i, j;
	for (i = y; i < y + H; i++)
	{
		for (j = x; j < x + W; j++)
		{
			map[i][j] = c;
		}
	}
}

typedef pair<int, int> PR;

int main(void)
{
	PR now, tmp;
	queue< PR > QU;

	int w, h;
	int xs, ys, xg, yg, n;
	int c, d, set_x, set_y;

	int i, j;

	while ((cin >> w >> h), w != 0 && h != 0)
	{
		memset(map, 0, sizeof map);

		cin >> xs >> ys >> xg >> yg >> n;

		for (i = 0; i < n; i++)
		{
			cin >> c >> d >> set_x >> set_y;

			if (d == 0)
			{
				paint(c, set_y, set_x, 2, 4);
			}
			else
			{
				paint(c, set_y, set_x, 4, 2);
			}
		}

		if (map[ys][xs] == 0)
		{
			cout << "NG\n";
			continue;
		}

		int SC = map[ys][xs];

		QU.push(make_pair(ys, xs));

		bool goal = false;
		while (!QU.empty())
		{
			now = QU.front();
			QU.pop();

			if (map[now.Y][now.X] == SC)
			{
				map[now.Y][now.X] = -1;

				if (now.Y == yg && now.X == xg)
				{
					goal = true;

					while (!QU.empty())
					{
						QU.pop();
					}

					break;
				}

				for (i = 0; i < 4; i++)
				{
					if (map[now.Y + my[i]][now.X + mx[i]] == SC)
					{
						QU.push(make_pair(now.Y + my[i], now.X + mx[i]));
					}
				}
			}
		}
		if (goal)
		{
			cout << "OK\n";
		}
		else
		{
			cout << "NG\n";
		}

	}

	return 0;
}
