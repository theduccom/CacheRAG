#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int N;
	while(cin >> N, N)
	{
		vector< vector<int> > Vec(N + 1, vector<int>(N + 1));
		for(int i = 0; i < N; ++i)
		{
			for(int j = 0; j < N; ++j)
			{
				cin >> Vec[i][j];
			}
		}
		for(int i = 0; i < N; ++i)
		{
			for(int j = 0; j < N; ++j)
			{
				Vec[i][N] += Vec[i][j];
				Vec[N][i] += Vec[j][i];
			}
		}
		for(int i = 0; i < N; ++i)
		{
			Vec[N][N] += Vec[i][N];
		}
		for(int i = 0; i < N + 1; ++i)
		{
			for(int j = 0; j < N; ++j)
			{
				printf("%5d", Vec[i][j]);
			}
			printf("%5d\n", Vec[i][N]);
		}
	}
}

int main()
{
	solve();
	return(0);
}