#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
bool flag[101][101];
char field[101][101];

void DFS(int y, int x)
{
	if(flag[y][x] == true)
	{
		cout << "LOOP" << endl;
		return;
	}
	flag[y][x] = true;
	if(field[y][x] == '.')
	{
		cout << x << " " << y << endl;
	}
	else if(field[y][x] == '>')
	{
		DFS(y, x + 1);
	}
	else if(field[y][x] == '<')
	{
		DFS(y, x - 1);
	}
	else if(field[y][x] == '^')
	{
		DFS(y - 1, x);
	}
	else if(field[y][x] == 'v')
	{
		DFS(y + 1, x);
	}
}

void solve()
{
	int W, H;
	while(cin >> H >> W, W || H)
	{
		memset(flag, 0, sizeof(flag));
		memset(field, 0, sizeof(field));
		for(int i = 0; i < H; ++i)
		{
			for(int j = 0; j < W; ++j)
			{
				cin >> field[i][j];
			}
		}
		DFS(0, 0);
	}
}

int main()
{
	solve();
	return(0);
}