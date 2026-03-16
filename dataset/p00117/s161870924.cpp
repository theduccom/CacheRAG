#include<stdio.h>
#include<limits.h>
#include<queue>
#include<utility>
using namespace std;

const int N = 20+1;
int costMap[N][N];

int MinCost(int startP, int endP, int n)
{
	int distance[N];
	queue<pair<int,int> > q;
	pair<int,int> p;
	int i;
	fill(distance, distance+N, INT_MAX);
	distance[startP] = 0;
	q.push( make_pair(0, startP) );
	while(!q.empty())
	{
		p = q.front(); q.pop();
		for(i = 1; i <= n; ++i)
		{
			if(costMap[p.second][i] != INT_MAX)
			{
				if(distance[i] > p.first+costMap[p.second][i])
				{
					distance[i] = p.first + costMap[p.second][i];
					q.push( make_pair(distance[i], i) );
				}
			}
		}
	}
	return distance[endP];
}


int main()
{
	int n,m;
	int startP, pillarP, income, pillarCost;
	while(scanf("%d%d",&n,&m) > 0)
	{
		int i,j,a,b,c,d;
		for(i = 0; i < N; ++i)
			for(j = 0; j < N; ++j)
				costMap[i][j] = INT_MAX;
		for(i = 0; i < m; ++i)
		{
			scanf("%d,%d,%d,%d",&a,&b,&c,&d);
			costMap[a][b] = c;
			costMap[b][a] = d;
		}
		scanf("%d,%d,%d,%d",&startP,&pillarP, &income, &pillarCost);

		int goCost = MinCost(startP, pillarP, n),
			fromCost = MinCost(pillarP, startP, n);
		printf("%d\n", income - pillarCost - goCost - fromCost);
	}
	return 0;
}