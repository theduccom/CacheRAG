#include<bits/stdc++.h>
#define LL long long int
#define INF 10000000
using namespace std;	
int main(void)
{
	LL i,j,k,n,m,glid[21][21],start,gorl,v[21],clr[21],a,b,c,d,mm,p,ans2,mini,x,ans1;
	cin>>n>>m;
	for(i=0;i<21;i++)for(j=0;j<21;j++) glid[i][j]=INF;
	for(i=0;i<m;i++) {
		scanf("%lld,%lld,%lld,%lld",&a,&b,&c,&d);
		glid[a][b]=c;
		glid[b][a]=d;
	}
	scanf("%lld,%lld,%lld,%lld",&start,&gorl,&mm,&p);
	for(i=0;i<21;i++) v[i]=INF,clr[i]=0;
	v[start]=0;
	while(1) {
		x=0;
		for(i=1;i<=n;i++) {
			if(v[i]<v[x]&&clr[i]==0) x=i;
		}
		if(x==0) break;
		clr[x]=1;
		for(i=1;i<=n;i++) v[i]=min(v[i],glid[x][i]+v[x]);
	}
	ans1=v[gorl];
	for(i=0;i<21;i++) {
		v[i]=INF;
		clr[i]=0;
	}
	v[gorl]=0;
	while(1) {
		x=0;
		for(i=1;i<=n;i++) {
			if(v[i]<v[x]&&clr[i]==0) x=i;
		}
		if(x==0) break;
		clr[x]=1;
		for(i=1;i<=n;i++) v[i]=min(v[i],glid[x][i]+v[x]);
	}
	ans2=v[start];
	cout<<mm-p-ans1-ans2<<endl;
}
	