#include <iostream>
#include <vector>

using namespace std;
typedef pair<int, int> P;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
bool ok = false;
int w, h;
vector< vector<int> > Field;
P goal;

void DFS(int x, int y, int c)
{
	if(x == goal.first && y == goal.second)
	{
		ok = true;
		return;
	}
	else
	{
		Field[y][x] = -1;
	}
	for(int i = 0; i < 4; ++i)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(0 <= nx && nx < w && 0 <= ny && ny < h && Field[ny][nx] == c)
		{
			DFS(nx, ny, c);
		}
	}
}

void solve()
{
	while(cin >> w >> h, w || h)
	{
		ok = false;
		Field.resize(h);
		for(int i = 0; i < h; ++i)
		{
			Field[i].resize(w);
			for(int j = 0; j < w; ++j)
			{
				Field[i][j] = 0;
			}
		}
		P start;
		cin >> start.first >> start.second;
		--start.first; --start.second;
		cin >> goal.first >> goal.second;
		--goal.first; --goal.second;
		int n;
		cin >> n;
		for(int i = 0; i < n; ++i)
		{
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			--x; --y;
			if(d == 0)
			{
				for(int i = 0; i < 2; ++i)
				{
					for(int j = 0; j < 4; ++j)
					{
						Field[y + i][x + j] = c;
					}
				}
			}
			else if(d == 1) 
			{
				for(int i = 0; i < 4; ++i)
				{
					for(int j = 0; j < 2; ++j)
					{
						Field[y + i][x + j] = c;
					}
				}
			}
		}
		DFS(start.first, start.second, Field[start.second][start.first]);
		if(ok)
		{
			cout << "OK" << endl;
		}
		else
		{
			cout << "NG" << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}