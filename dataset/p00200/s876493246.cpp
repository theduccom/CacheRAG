#include<cstdio>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
	int time[101][101],cost[101][101],n,m,i,j,k,a,b,c,d;
	while(scanf("%d%d",&n,&m),m)
	{
		for(i=0;i<101;++i)for(j=0;j<101;++j)time[i][j]=cost[i][j]=INT_MAX/2;
		for(i=0;i<n;++i)scanf("%d%d%d%d",&a,&b,&c,&d),cost[a][b]=cost[b][a]=c,time[a][b]=time[b][a]=d;
		for(k=1;k<=m;++k)for(i=1;i<=m;++i)for(j=1;j<=m;++j)
			time[i][j]=min(time[i][j],time[i][k]+time[k][j]),
			cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
		scanf("%d",&k);
		for(i=0;i<k;++i)
		{
			scanf("%d%d%d",&a,&b,&c);
			printf("%d\n",c?time[a][b]:cost[a][b]);
		}
	}
	return 0;
}