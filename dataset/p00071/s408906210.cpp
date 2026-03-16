#include <iostream>
#include <string>
using namespace std;

string map[8];
int dx[] = { -3, -2, -1, 1, 2, 3, 0, 0, 0, 0, 0, 0 };
int dy[] = { 0, 0, 0, 0, 0, 0, -3, -2, -1, 1, 2, 3 };

int chk(int x, int y)
{
	return x<0||y<0||x>=8||y>=8;
}

void dfs(int x, int y)
{
	if (map[y][x] == '0') return;

	map[y][x] = '0';
	for (int i=0; i<12; i++)
	{
		int nx=x+dx[i], ny=y+dy[i];
		if (chk(nx, ny))
			continue;

		if (map[ny][nx] == '1')
			dfs(nx, ny);
	}
}

int main()
{
	int X = 1;
	int N;
	cin >> N;
	while (N--)
	{
		for (int y=0; y<8; y++)
			cin >> map[y];

		int sx, sy;
		cin >> sx >> sy;
		dfs(--sx, --sy);

		cout << "Data " << X++ << ":" << endl;
		for (int y=0; y<8; y++)
			cout << map[y] << endl;
	}
}