#include <iostream>
#include <cstdio>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
int main(){
	int n,m;
	int a,b,c,t,r;
	while(cin >> m >> n && n){
		int time[n][n],cost[n][n];
		rep(i,n)rep(j,n)time[i][j]=cost[i][j]=(1<<21);
		rep(i,n)time[i][i]=cost[i][i]=0;
		rep(i,m){
			cin >> a >> b >> c >> t;
			a--;b--;
			cost[a][b]=cost[b][a]=c;
			time[a][b]=time[b][a]=t;
		}
		rep(k,n)rep(i,n)rep(j,n){
			cost[i][j]=cost[j][i]=min(cost[i][j],cost[i][k]+cost[k][j]);
			time[i][j]=time[j][i]=min(time[i][j],time[i][k]+time[k][j]);
		}
		cin >> m;
		rep(i,m){
			cin >> a >> b >> r;
			a--;b--;
			printf("%d\n",r?time[a][b]:cost[a][b]);
		}
	}
}