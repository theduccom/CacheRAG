#include<bits/stdc++.h>
#define LL long long int
#define INF 210000000
using namespace std;
int main(void)
{
	int i,j,k,n,m,cost,time,a,b,wrc[100][100],wrt[100][100];
	while(1) {
		cin>>n>>m;
		if(n==0&&m==0) break;
		for(i=0;i<m;i++)for(j=0;j<m;j++) wrc[i][j]=INF,wrt[i][j]=INF;
		for(i=0;i<m;i++) wrc[i][i]=0,wrt[i][i]=0;
		for(i=0;i<n;i++) {
			cin>>a>>b>>cost>>time;
			a--,b--;
			wrc[a][b]=cost,wrc[b][a]=cost;
			wrt[a][b]=time,wrt[b][a]=time;
		}
		for(k=0;k<m;k++)for(i=0;i<m;i++)for(j=0;j<m;j++) {
			wrc[i][j]=min(wrc[i][j],wrc[i][k]+wrc[k][j]);
			wrt[i][j]=min(wrt[i][j],wrt[i][k]+wrt[k][j]);
		}
		int p,r,c,cc;
		cin>>cc;
		for(i=0;i<cc;i++) {
			cin>>p>>r>>c;
			p--,r--;
			if(c==0) cout<<wrc[p][r]<<endl;
			else cout<<wrt[p][r]<<endl;
		}
	}
}