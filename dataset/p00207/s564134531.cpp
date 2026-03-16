#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
 
#define Y first
#define X second

#define max_size 100+10

int my[4] = {0,0,1,-1};
int mx[4] = {1,-1,0,0};

pair<int, int>now,tmp;

void chek(int map[max_size][max_size], int w, int h)
{
	int i, j;
	for(i=0;i<=h+1;i++)
	{
		for (j = 0; j <= w + 1; j++)
		{
			cout << map[i][j];
		}
		cout << endl;
	}
}


int main(void)
{
	int w, h;
	int xs, ys, xg, yg;
	int n;
	int col, d, set_x, set_y;

	int i, j,k;

	while ((cin >> w >> h), w != 0 && h != 0)
	{
		queue< pair<int, int> > QU;

		int map[max_size][max_size] = { 0 };

		cin >> xs >> ys >> xg >> yg >> n;

		for (i = 0; i < n; i++)
		{
			cin >> col >> d >> set_x >> set_y;
			if (d == 0)
			{
				for (j = 0; j < 2; j++)
				{
					for (k = 0; k < 4; k++)
					{
						map[set_y][set_x] = col;
						set_x++;
					}
					set_x -= 4;
					set_y++;
				}
			}
			else
			{
				for (j = 0; j < 4; j++)
				{
					for (k = 0; k < 2; k++)
					{
						map[set_y][set_x] = col;
						set_x++;
					}
					set_x -= 2;
					set_y++;
				}
			}
		}

		//chek(map, w, h);

		if (map[ys][xs] == 0)
		{
			cout << "NG\n";
			continue;
		}

		int s_col = map[ys][xs];

		now.Y = ys;
		now.X = xs;
		QU.push(now);

		bool goal = false;
		while (!QU.empty())
		{
			now = QU.front();
			QU.pop();

			if (map[now.Y][now.X] != -1)
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
					if (map[now.Y + my[i]][now.X + mx[i]]== s_col)
					{
						tmp.Y = now.Y + my[i];
						tmp.X = now.X + mx[i];

						QU.push(tmp);
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
