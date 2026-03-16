#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
typedef pair<int,int> P;
typedef pair<P,P> PP;
int main(void)
{
	int i,j,n,m,s,g,v,p,flg[101],ky[101],a,min,ri[21][21],sum;
	PP ga[101];
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++) scanf("%d,%d,%d,%d",&ga[i].ff,&ga[i].fs,&ga[i].sf,&ga[i].ss);
	sort(ga,ga+m);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++) ri[i][j]=M;
	}
	for(i=1;i<=m;i++) {
		ri[ga[i].ff][ga[i].fs]=ga[i].sf;
		ri[ga[i].fs][ga[i].ff]=ga[i].ss;
	}
	scanf("%d,%d,%d,%d",&s,&g,&v,&p);
	/*printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++) printf("%d ",ri[i][j]);
		printf("\n");
	}*/
	for(i=1;i<=n;i++) flg[i]=0,ky[i]=M;
	ky[s]=0;
	for(i=1;i<=n;i++){
		min=M;
		for(j=1;j<=n;j++) if(flg[j]==0&&min>ky[j]) a=j,min=ky[j];
		flg[a]=1;
		if(M==min) break;
		for(j=1;j<=n;j++) if(ky[j]>ky[a]+ri[a][j]) ky[j]=ky[a]+ri[a][j];
	}
	/*for(i=1;i<=n;i++) printf("%d=%d ",i,ky[i]);
	printf("\n");*/
	sum=ky[g];
	for(i=1;i<=n;i++) flg[i]=0,ky[i]=M;
	ky[g]=0;
	for(i=1;i<=n;i++){
		min=M;
		for(j=1;j<=n;j++) if(flg[j]==0&&min>ky[j]) a=j,min=ky[j];
		flg[a]=1;
		if(M==min) break;
		for(j=1;j<=n;j++) if(ky[j]>ky[a]+ri[a][j]) ky[j]=ky[a]+ri[a][j];
	}
	/*for(i=1;i<=n;i++) printf("%d=%d ",i,ky[i]);
	printf("\n");*/
	sum+=ky[s];
	printf("%d\n",v-sum-p);
	return 0;
}
