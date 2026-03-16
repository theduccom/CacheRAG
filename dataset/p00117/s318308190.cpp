#include <iostream>
using namespace std;
#define rep(i,s,n) for(int i=s;i<n;i++)
#define REP(i,n) rep(i,0,n)
#define NMAX 21
#define INF 1<<26
int dist[NMAX][NMAX];
int n,m;
int x1,x2,y1,y2;
void init(){
	REP(i,NMAX)REP(j,NMAX)dist[i][j]=INF;	
}
void wf(){
	rep(k,1,n+1){
		rep(i,1,n+1){
			rep(j,1,n+1){
				dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
			}
		}	
	}
}
void solve(){
	cout<<y1-y2-dist[x1][x2]-dist[x2][x1]<<endl;
}
int main(){
	int a,b,c,d;
	char dummy;
	cin>>n>>m;	
	init();
	REP(i,m){
		cin>>a>>dummy>>b>>dummy>>c>>dummy>>d;
		dist[a][b]=c;
		dist[b][a]=d;
	}
	wf();
	cin>>x1>>dummy>>x2>>dummy>>y1>>dummy>>y2;
	solve();
	return 0;
}