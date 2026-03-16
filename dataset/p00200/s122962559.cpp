#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
#include<string>
#include<iostream>
#define M 100000000
#define rep(i,a) for(i=0;i<a;i++)
using namespace std;
int main(void)
{
	int n,m,i,j,k;
	int cost[101][101],time[101][101];
	int a,b,c,t;
	while(1) {
		cin>>n>>m;
		if(n==0&&m==0) break;
		rep(i,m)rep(j,m){cost[i][j]=M;time[i][j]=M;}
		rep(i,m){cost[i][i]=0;time[i][i]=0;}
		rep(i,n) {
			cin>>a>>b>>c>>t;
			a--;b--;
			cost[a][b]=c;cost[b][a]=c;
			time[a][b]=t;time[b][a]=t;
		}
		rep(k,m)rep(i,m)rep(j,m) {
			cost[i][j]=min(cost[i][k]+cost[k][j],cost[i][j]);
			time[i][j]=min(time[i][k]+time[k][j],time[i][j]);
		}
		int q,s,g,kk;
		cin>>kk;
		rep(i,kk) {
			cin>>s>>g>>q;
			s--;g--;
			if(q==0) cout<<cost[s][g]<<endl;
			else cout<<time[s][g]<<endl;
		}
	}
	return 0;
}
		
	
	