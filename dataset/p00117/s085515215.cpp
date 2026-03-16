#include<iostream>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define INF 1e6
using namespace std;

int main(){
	int n,m,a,b,c,d,s,g,v,p;
	scanf("%d %d",&n,&m);
	int dist[n][n];
	rep(i,n)rep(j,n)dist[i][j]=INF;
	rep(i,m){
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		dist[a-1][b-1]=c;
		dist[b-1][a-1]=d;
	}
	scanf("%d,%d,%d,%d",&s,&g,&v,&p);
	rep(k,n){
		rep(i,n){
			rep(j,n){
				dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
			}
		}
	}
	cout<<v-(dist[s-1][g-1]+dist[g-1][s-1]+p)<<endl;
	return 0;
}