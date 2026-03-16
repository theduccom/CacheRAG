#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
#include<iostream>
#define INF 200
#define rep(i,a) for(i=0;i<a;i++)
using namespace std;
int main(void) 
{
	int glid[20][20],n,m,a,b,c,d,i,j,k,p,q,w,v;
	cin>>n>>m;
	rep(i,n)rep(j,n)glid[i][j]=INF;rep(i,n)glid[i][i]=0;
	rep(i,m) {
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		a--;b--;glid[a][b]=c;glid[b][a]=d;
	}
	scanf("%d,%d,%d,%d",&p,&q,&w,&v);
	rep(k,n)rep(i,n)rep(j,n)glid[i][j]=min(glid[i][j],glid[i][k]+glid[k][j]);
	p--;q--;
	cout<<w-v-(glid[p][q]+glid[q][p])<<endl;
	return 0;
}