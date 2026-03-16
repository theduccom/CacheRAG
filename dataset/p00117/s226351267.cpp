#include <iostream>
#include <algorithm>

#define rep(i,n)    for(int i=0;i<n;i++)
#define rep1(i,n)   for(int i=1;i<=n;i++)
#define INF         ( 1<<20 )

using namespace std;

int costs[21][21];

int main()
{
	int N,M;
	cin>>N>>M;

	rep1(i,N)rep1(j,N)costs[i][j] = INF;
	rep1(i,N)costs[i][i] = 0;

	char comma;
	int a, b, c, d;
	rep(i,M)
	{
		cin>>a>>comma>>b>>comma>>c>>comma>>d;
		costs[a][b] = c;
		costs[b][a] = d;
	}

	int S, G, money, hashira;
	cin>>S>>comma>>G>>comma>>money>>comma>>hashira;

	rep1(k,N)rep1(i,N)rep1(j,N)
	{
		costs[i][j] = min(costs[i][j], costs[i][k] + costs[k][j]);
	}
	cout << (money - hashira - (costs[S][G] + costs[G][S])) << endl;
	return 0;
}