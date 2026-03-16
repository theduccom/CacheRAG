#include <iostream>
#include <string.h>

using namespace std;
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
char field[12][12];
int W = 12;
int H = 12;

void DFS(int y, int x)
{
	field[y][x] = '0';
	for(int i = 0; i < 4; ++i)
	{
		int X = x + dx[i];
		int Y = y + dy[i];
		if((0 <= X && X < W && 0 <= Y && Y < H) && field[Y][X] == '1')
		{
			DFS(Y, X);
		}
	}
}

void solve()
{
	char a;
	while(cin >> a)
	{
		int count = 0;
		memset(field, 0, sizeof(field));
		field[0][0] = a;
		for(int i = 1; i < W; ++i)
		{
			cin >> field[0][i];
		}
		for(int i = 1; i < H; ++i)
		{
			for(int j = 0; j < W; ++j)
			{
				cin >> field[i][j];
			}
		}
		
		for(int i = 0; i < H; ++i)
		{
			for(int j = 0; j < W; ++j)
			{
				if(field[i][j] == '1')
				{
					DFS(i, j);
					count++;
				}
			}
		}
		cout << count << endl;
	}
}

int main()
{
	solve();
	return(0);
}