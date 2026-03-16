#include <iostream>
#include <string.h>

using namespace std;
char field[14][14];
int dx[12] = {-3, -2, -1, 0, 0, 0,  0,  0,  0, 1, 2, 3};
int dy[12] = { 0,  0,  0, 1, 2, 3, -1, -2, -3, 0, 0, 0};

void DFS(int y, int x)
{
	field[y][x] = '0';
	for(int i = 0; i < 12; ++i)
	{
		int X = x + dx[i];
		int Y = y + dy[i];
		if((3 <= X && X <= 10 && 3 <= Y && Y <= 10) && field[Y][X] == '1')
		{
			DFS(Y, X);
		}
	}		
}

void solve()
{
	int n;
	cin >> n;
	int count = 0;
	while(n--)
	{
		count++;
		memset(field, 0, sizeof(field));
		for(int i = 3; i < 11; ++i)
		{
			for(int j = 3; j < 11; ++j)
			{
				cin >> field[i][j];
			}
		}
		int x, y;
		cin >> x >> y;
		DFS(y + 2, x + 2);
		cout << "Data " << count << ":" << endl;
		for(int i = 3; i < 11; ++i)
		{
			for(int j = 3; j < 11; ++j)
			{
				cout << field[i][j];
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