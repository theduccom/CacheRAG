#include <iostream>
#include <vector>

using namespace std;
#define INF 999999999
int D[21][21];

void solve()
{
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			i == j ? D[i][i] = 0 : D[i][j] = INF;
		}
	}
	for(int i = 0; i < m; ++i)
	{
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		--a; --b;
		D[a][b] = c;
		D[b][a] = d;
	}
	int start, end;
	int reward, pillar;
	scanf("%d,%d,%d,%d", &start, &end, &reward, &pillar);
	for(int k = 0; k < n; ++k)
	{
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < n; ++j)
			{
				D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
			}
		}
	}
	cout << reward - pillar - D[start - 1][end - 1] - D[end - 1][start - 1] << endl;
}

int main()
{
	solve();
	return(0);
}