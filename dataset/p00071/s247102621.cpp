#include <iostream>
#include <queue>

using namespace std;
typedef pair<int, int> P;

void solve()
{
	int n;
	cin >> n;
	int count = 1;
	while(n--)
	{
		char field[8][8];
		for(int i = 0; i < 8; ++i)
		{
			for(int j = 0; j < 8; ++j)
			{
				cin >> field[i][j];
			}
		}
		int x, y;
		cin >> x >> y;
		field[y - 1][x - 1] = '0';
		queue<P> que;
		que.push(P(x - 1, y - 1));
		while(!que.empty())
		{
			P p = que.front();
			que.pop();
			for(int i = -3; i <= 3; ++i)
			{
				if(p.first + i < 0 || p.first + i >= 8)
				{
					continue;
				}
				if(field[p.second][p.first + i] == '1')
				{
					field[p.second][p.first + i] = '0';
					que.push(P(p.first + i, p.second));
				}
			}
			for(int i = -3; i <= 3; ++i)
			{
				if(p.second + i < 0 || p.second + i >= 8)
				{
					continue;
				}
				if(field[p.second + i][p.first] == '1')
				{
					field[p.second + i][p.first] = '0';
					que.push(P(p.first, p.second + i));
				}
			}
		}
		cout << "Data " << count << ":" << endl;
		for(int i = 0; i < 8; ++i)
		{
			for(int j = 0; j < 8; ++j)
			{
				cout << field[i][j];
			}
			cout << endl;
		}
		++count;
	}
}

int main()
{
	solve();
	return(0);
}