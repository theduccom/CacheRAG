/* Dijkstra's Algorithm ( O(|V|^2) ) */

#include<cstdio>
#include<climits>
#include<algorithm>

using namespace std;

int adj[20][20],n;

int dijkstra(int s,int g)
{
	int d[20];
	bool visited[20];
	for(int i=1;i<=n;i++)	d[i]=INT_MAX,visited[i]=false;

	d[s]=0;
	while(1){
		// find next u
		int u,cmin=INT_MAX;
		for(int i=1;i<=n;i++){
			if(!visited[i] && d[i]<cmin)	cmin=d[i],u=i;
		}
		if(cmin==INT_MAX)	break;

		visited[u]=true;

		// update d[v]
		for(int v=1;v<=n;v++){
			if(visited[v] || adj[u][v]==INT_MAX)	continue;
			d[v]=min(d[v],d[u]+adj[u][v]);
		}
	}
	return d[g];
}

int main()
{

	int m;	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)adj[i][j]=INT_MAX;
	for(int i=0;i<m;i++){
		int a,b,c,d;	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		adj[a][b]=c;
		adj[b][a]=d;
	}
	int x1,x2,y1,y2;	scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);

	printf("%d\n",y1-y2-dijkstra(x1,x2)-dijkstra(x2,x1));

	return 0;
}