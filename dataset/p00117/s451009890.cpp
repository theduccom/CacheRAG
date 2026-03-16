#include<cstdio>

int dijkstra(int start,int goal,int n);
const int INF=1000000000;
int edge[20][20];

int main()
{
	char buf[64];
	int n,m;
	
	fgets(buf,64,stdin);
	sscanf(buf,"%d",&n);
	fgets(buf,64,stdin);
	sscanf(buf,"%d",&m);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			edge[i][j]=INF;
		}
	}
	
	for(int i=0;i<m;i++)
	{
		char buf[64];
		int a,b,c,d;
		fgets(buf,64,stdin);
		sscanf(buf,"%d,%d,%d,%d",&a,&b,&c,&d);
		
		edge[a-1][b-1]=c;
		edge[b-1][a-1]=d;
	}
	int start,goal,income,pay,reward;
	fgets(buf,64,stdin);
	sscanf(buf,"%d,%d,%d,%d",&start,&goal,&income,&pay);
	
	reward=income-pay-dijkstra(start-1,goal-1,n)-dijkstra(goal-1,start-1,n);
	printf("%d\n",reward);
	return 0;
}

int dijkstra(int start,int goal,int n)
{
	int cost[20];
	bool visited[20];
	
	for(int i=0;i<n;i++)
	{
		cost[i]=INF;
		visited[i]=false;
	}
	
	cost[start]=0;
	while(1)
	{
		int u=-1;
		for(int i=0;i<n;i++)
		{
			if(!visited[i]&&(u==-1||cost[i]<cost[u]))//未訪問でcost最小の町=u
			{
				u=i;
			}
		}
		if(u==-1)break;
		
		visited[u]=true;
		for(int i=0;i<n;i++)//cost更新
		{
			cost[i]=cost[i]>cost[u]+edge[u][i]?cost[u]+edge[u][i]:cost[i];
		}
	}
	return cost[goal];
}