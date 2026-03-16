#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		vector<vector<int> > Vec(n);
		for(int i = 0; i < n; ++i)
		{
			Vec[i].resize(n);
		}
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < n; ++j)
			{
				cin >> Vec[i][j];
			}
		}
		vector<int> sum(2 * n + 1);
		sum.assign(2 * n + 1, 0);
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < n; ++j)
			{
				printf("%5d", Vec[i][j]);
				sum[i] += Vec[i][j];
			}
			printf("%5d\n",sum[i]);
		}
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < n; ++j)
			{
				sum[n + i] += Vec[j][i];
			}
			printf("%5d", sum[n + i]);
		}
		for(int i = 0; i < n; ++i)
		{
			sum[2 * n] += sum[i];
		}
		printf("%5d\n", sum[2 * n]);
	}
}

int main()
{
	solve();
	return(0);
}