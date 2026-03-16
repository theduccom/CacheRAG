#include<iostream>
#include<cstdio>
using namespace std;
#define INF 1001001001
int n,m,a,b,c,d,x1,x2,y1,y2;
int r[21][21];
int used[21],dis[21];

int select(){
	int p=INF,q;
	for(int i=1;i<=n;i++){
		if(used[i]==0&&dis[i]<p){
			p=dis[i];q=i;
		}
	}
	return q;
}
int dijkstra(int s,int g){
	int q=1,u;
	for(int i=0;i<=n;i++)used[i]=0;
	for(int i=0;i<=n;i++)dis[i]=r[s][i];
	used[s]=1;
	while(q<n){
		u=select();
		used[u]=1;q++;
		for(int i=1;i<=n;i++){
			dis[i]=min(dis[i],dis[u]+r[u][i]);
		}
	}
	return dis[g];
}

int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			r[i][j]=(i==j)?0:INF;
		}
	}
	for(int i=0;i<m;i++){
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		r[a][b]=c;r[b][a]=d;
	}
	scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
	
	cout<<y1-y2-dijkstra(x1,x2)-dijkstra(x2,x1)<<endl;
	return 0;
}