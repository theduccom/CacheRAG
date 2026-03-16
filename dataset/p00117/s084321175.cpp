#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define X 1000000007
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
typedef pair<int,int> P;
typedef pair<P,P> PP;
int main(void)
{
	int n,m,s,g,v,p;
	int pp,kou,min;
	int i,j,k;
	int ri[21][21],leng[21],flg[21];
	
	PP d[100];
	
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++) scanf("%d,%d,%d,%d",&d[i].ff,&d[i].fs,&d[i].sf,&d[i].ss);
	scanf("%d,%d,%d,%d",&s,&g,&v,&p);
	
	for(i=0;i<=n;i++) fill(ri[i]+1,ri[i]+n+1,X);
	for(i=0;i<m;i++) ri[d[i].ff][d[i].fs]=d[i].sf,
					 ri[d[i].fs][d[i].ff]=d[i].ss;
					 
	for(i=1;i<=n;i++) leng[i]=X,flg[i]=0;
	leng[s]=0;
	
	kou=0;
	for(i=1;i<=n;i++){
		min=X;
		
		for(j=1;j<=n;j++) if(flg[j]==0&&leng[j]<min) pp=j,min=leng[j];
		flg[pp]=1;
		
		for(k=1;k<=n;k++){
			if(leng[pp]+ri[pp][k]<leng[k]) leng[k]=leng[pp]+ri[pp][k];
		}	
	}
	kou+=leng[g];
	
	for(i=1;i<=n;i++) leng[i]=X,flg[i]=0;
	leng[g]=0;
	
	for(i=1;i<=n;i++){
		min=X;
		
		for(j=1;j<=n;j++) if(flg[j]==0&&leng[j]<min) pp=j,min=leng[j];
		flg[pp]=1;
		
		for(k=1;k<=n;k++){
			if(leng[pp]+ri[pp][k]<leng[k]) leng[k]=leng[pp]+ri[pp][k];
		}	
	}
	kou+=leng[s];

	printf("%d\n",v-p-kou);
	return 0;
}	
	
