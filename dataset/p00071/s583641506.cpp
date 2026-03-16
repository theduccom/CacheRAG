#include <iostream>

using namespace std;

char Field[14][14];
int move_x[12] = {-3, -2, -1, 1, 2, 3,  0,  0,  0, 0, 0, 0};
int move_y[12] = { 0,  0,  0, 0, 0, 0, -3, -2, -1, 1, 2, 3};

void DFS(int y, int x)
{
	Field[y][x] = '0';
	int nx, ny;
	for(int i = 0; i < 12; ++i)
	{
		nx = x + move_x[i];
		ny = y + move_y[i];
		if(Field[ny][nx] == '1')
		{
			DFS(ny, nx);
		}
	}
}

void solve()
{
	int N;
	cin >> N;
	int count = 1;
	while(N--)
	{
		for(int i = 0; i < 14; ++i)
		{
			for(int j = 0; j < 14; ++j)
			{
				Field[i][j] = '0';
			}
		}
		for(int i = 3; i < 11; ++i)
		{
			for(int j = 3; j < 11; ++j)
			{
				cin >> Field[i][j];
			}
		}
		int x, y;
		cin >> x >> y;
		if(Field[y + 2][x + 2] == '1')
		{
			DFS(y + 2, x + 2);
		}
		cout << "Data " << count << ":" << endl;
		++count;
		for(int i = 3; i < 11; ++i)
		{
			for(int j = 3; j < 11; ++j)
			{
				cout << Field[i][j];
			}
			cout << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}