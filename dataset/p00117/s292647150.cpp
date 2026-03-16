#include<cstdio>
#include<iostream>
#include<algorithm>
#include<functional>
#define rep(i,a) for(i=0;i<a;i++)
#define LL long long int
#define MAX_VAL 2100000000
using namespace std;
LL dist[114][114];
int main(void)
{
	int n,m,i,j,k;
	int a,b,c,d;
	int s,g,v,p;
	cin>>n>>m;
	rep(i,n)rep(j,n)dist[i][j]=MAX_VAL;
	rep(i,n)dist[i][i]=0;
	rep(i,m) {
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		a--,b--;
		dist[a][b]=c,dist[b][a]=d;
	}
	scanf("%d,%d,%d,%d",&s,&g,&v,&p);
	s--,g--;
	rep(k,n)rep(i,n)rep(j,n) dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);	
	cout<<v-p-dist[s][g]-dist[g][s]<<endl;
}