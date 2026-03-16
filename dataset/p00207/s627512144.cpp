#include<iostream>
#include<stack>
#include<queue>
#include<cstdio>
using namespace std;

#define X_MAX 100+10
#define Y_MAX 100+10

#define Vertical 1
#define Horizontal 0

int my[4] = { 1,-1,0,0 };
int mx[4] = { 0,0,1,-1 };

struct ST
{
	int came[Y_MAX][X_MAX];
	int now_y;
	int now_x;
};


void paint_V(int*map , int col)
{
	int i;
	for (i = 0; i < 2; i++)
	{
		*(map + i) = col;
	}
}

void paint_H(int*map, int col)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		*(map + i) = col;
	}
}


void chek(int map[Y_MAX][X_MAX],int lx,int ly)
{
	int i, j;
	for (i = 0; i <= ly+1;i++)
	{
		for (j = 0; j <= lx+1; j++)
		{
			cout << map[i][j];
		}
		cout << endl;
	}
}


int main(void)
{
	ST an = {0}, tmp;
	queue<ST> ma;

	int lx, ly, n;
	int sx, sy, gx, gy;
	int col, VorH,set_x,set_y;
	int i, j;

	while ((cin >> lx >> ly), lx!=0&&ly!=0)
	{
		int goal = 0;
		int map[Y_MAX][X_MAX] = { 0 };
		cin >> sx >> sy >> gx >> gy >> n;

		for (i = 0; i < n; i++)
		{
			cin >> col >> VorH >> set_x >> set_y;
			if (VorH == Vertical)
			{
				for (j = 0; j < 4; j++)
				{
					paint_V(map[set_y + j] + set_x, col);
				}
			}
			else
			{
				for (j = 0; j < 2; j++)
				{
					paint_H(map[set_y + j] + set_x, col);
				}
			}
		}
		
		int s_col = map[sy][sx];
		if (s_col == 0)
		{
			cout << "NG\n";
			continue;
		}

		an.now_y = sy;
		an.now_x = sx;
		ma.push(an);

		//chek(map, lx, ly);

		while (!ma.empty())
		{
			an = ma.front();
			ma.pop();
			//an.came[an.now_y][an.now_x] = -1;
			if (map[an.now_y][an.now_x] == s_col)
			{
				map[an.now_y][an.now_x] = -1;

				//printf("y=%d,x=%d\n", an.now_y, an.now_x);
				//chek(an.came, lx, ly);

				if (an.now_y == gy && an.now_x == gx)
				{
					goal = 1;
					break;
				}

				tmp = an;

				for (i = 0; i < 4; i++)
				{
					if (map[an.now_y + my[i]][an.now_x + mx[i]] == s_col/* && an.came[an.now_y + my[i]][an.now_x + mx[i]] == 0*/)
					{
						tmp.now_y = an.now_y + my[i];
						tmp.now_x = an.now_x + mx[i];
						ma.push(tmp);
					}
				}
			}
		}
		if (goal == 1)
		{
			while (!ma.empty())
			{
				ma.pop();
			}
			cout << "OK\n";
		}
		else
		{
			cout << "NG\n";
		}


	}
	return 0;
}
