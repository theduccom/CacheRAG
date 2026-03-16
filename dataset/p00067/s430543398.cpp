#include <iostream>

using namespace std;

char Field[14][14];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void DFS(int y, int x)
{
	Field[y][x] = '0';
	int nx, ny;
	for(int i = 0; i < 4; ++i)
	{
		nx = x + dx[i];
		ny = y + dy[i];
		if(Field[ny][nx] == '1')
		{
			DFS(ny, nx);
		}
	}
}

void solve()
{
	char F11;
	while(cin >> F11)
	{
		for(int i = 0; i < 14; ++i)
		{
			for(int j = 0; j < 14; ++j)
			{
				Field[i][j] = '0';
			}
		}
		Field[1][1] = F11;
		for(int i = 2; i < 13; ++i)
		{
			cin >> Field[1][i];
		}
		for(int i = 2; i < 13; ++i)
		{
			for(int j = 1; j < 13; ++j)
			{
				cin >> Field[i][j];
			}
		}
		int count = 0;
		for(int i = 1; i < 13; ++i)
		{
			for(int j = 1; j < 13; ++j)
			{
				if(Field[i][j] == '1')
				{
					++count;
					DFS(i, j);
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