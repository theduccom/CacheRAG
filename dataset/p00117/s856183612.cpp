#include<bits/stdc++.h>
using namespace std;
#define INF 1000000007
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
typedef pair<int,int> P;
typedef pair<P,P> PP;
int main(void){
	int n,m;
	PP d[100];
	
	cin>>n>>m;
	for(int i=0;i<m;i++) scanf("%d,%d,%d,%d",&d[i].ff,&d[i].fs,&d[i].sf,&d[i].ss);
	int s,g,v,p;
	scanf("%d,%d,%d,%d",&s,&g,&v,&p);
	
	int rin[21][21];
	for(int i=1;i<=n;i++) fill(rin[i]+1,rin[i]+n+1,INF);
	for(int i=0;i<m;i++) rin[d[i].ff][d[i].fs]=d[i].sf,
						  rin[d[i].fs][d[i].ff]=d[i].ss;
	
	int leng[21],flg[21];
	fill(leng+1,leng+n+1,INF); fill(flg+1,flg+n+1,0);
	leng[s]=0;
	int sum;
	for(int i=0;i<n;i++){
		int mn=INF,t;
		for(int j=1;j<=n;j++) if(flg[j]==0&&mn>leng[j]) t=j,mn=leng[j];
		if(t==g){
			sum=leng[t];
			break;
		}
		flg[t]=1;
		for(int j=1;j<=n;j++){
			if(rin[t][j]!=INF){
				if(leng[t]+rin[t][j]<leng[j]) leng[j]=leng[t]+rin[t][j];
			}
		}
	}
	
	fill(leng,leng+n+1,INF); fill(flg+1,flg+n+1,0);
	leng[g]=0;
	for(int i=0;i<n;i++){
		int mn=INF,t; 
		for(int j=1;j<=n;j++) if(flg[j]==0&&mn>leng[j]) t=j,mn=leng[j];
		if(t==s){
			sum+=leng[t];
			break;
		}
		flg[t]=1;
		for(int j=1;j<=n;j++){
			if(rin[t][j]!=INF){
				if(leng[t]+rin[t][j]<leng[j]) leng[j]=leng[t]+rin[t][j];
			}
		}
	}
	cout<<v-p-sum<<endl;
	return 0;
}
