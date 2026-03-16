#include<iostream>
#include<utility>
#include<queue>
#include<functional>
#include<cstring>
#include<vector>
#include<climits>
using namespace std;
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define FORI(i,k,n) for(int i=k;i<(int)n;i++)
typedef pair<int,int> pii;

int main()
{
	const int M = 200;
	const int INF=INT_MAX/10;
	int n,m;
	while(cin>>n>>m&&m)
	{
		int cost[M][M];
		int time[M][M];
		FOR(i,M)FOR(j,M)cost[i][j]=time[i][j]=INF;
		FOR(i,n)
		{
			int a,b;
			cin>>a>>b;
			int C,T;
			cin>>C>>T;
			cost[a][b]=cost[b][a]=C;
			time[a][b]=time[b][a]=T;
		}
		
		FORI(k,1,m+1)
		{
			FORI(i,1,m+1)
			{
				FORI(j,1,m+1)
				{
					if(cost[i][k]!=INF&&cost[k][j]!=INF)cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
					if(time[i][k]!=INF&&time[k][j]!=INF)time[i][j]=min(time[i][j],time[i][k]+time[k][j]);
				}
			}
		}
		int k;cin>>k;
		FOR(i,k)
		{
			int p,q,r;
			cin>>p>>q>>r;
			if(r)cout<<time[p][q]<<endl;
			else cout<<cost[p][q]<<endl;
		}
		
	}
}