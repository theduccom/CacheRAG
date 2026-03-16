#include <iostream>
using namespace std;

char f[16][16];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

void dfs(int y, int x)
{
	f[y][x] = '0';

	for(int d=0; d<4; d++)
	for(int l=1; l<=3; l++)
	{
		int nx = x+dx[d]*l;
		int ny = y+dy[d]*l;
		if(0<=nx&&nx<8&&0<=ny&&ny<8)
		if(f[ny][nx] == '1')
		{
			dfs(ny,nx);
		}
	}
}

int main()
{
	int n,sx,sy;
	
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		for(int y=0; y<8; y++)
		{
			cin >> f[y];
		}

		cin >> sx >> sy;
		dfs(sy-1,sx-1);

		cout << "Data " << i << ":\n";
		for(int y=0; y<8; y++)
		{
			cout << f[y] << endl;
		}
	}
}