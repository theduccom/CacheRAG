#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
typedef pair<ll,ll> P;
typedef pair<P,P> PP;
int main(void){
	ll i,j,k;
	ll n,m,s,g,b,e,pp,kou;
	ll ri[21][21];
	ll leng[21],v[21];
	ll min;
	
	PP p[100];
	
	cin>>n>>m;
	for(i=0;i<m;i++) scanf("%lld,%lld,%lld,%lld",&p[i].ff,&p[i].fs,&p[i].ss,&p[i].sf);
	scanf("%lld,%lld,%lld,%lld",&s,&g,&b,&e);
	
	//隣接行列
	sort(p,p+m);
	for(i=0;i<=n;i++) for(j=0;j<=n;j++) ri[i][j]=M;
	for(i=0;i<m;i++) ri[p[i].ff][p[i].fs]=p[i].sf,ri[p[i].fs][p[i].ff]=p[i].ss;
	
	//初期化
	for(k=0;k<=n;k++)leng[k]=M,v[k]=0;
	leng[s]=0;
	
	kou=0;
	//ダイクストラ法
	for(j=1;j<=n;j++){
		min=M;
		for(k=1;k<=n;k++) if(v[k]==0&&leng[k]<min) pp=k,min=leng[k];
		v[pp]=1;
		
		if(min==M)break;
		
		for(k=1;k<=n;k++){
			if((leng[pp]+ri[pp][k])<leng[k]) leng[k]=leng[pp]+ri[pp][k];
		}
	}
	kou+=leng[g];
//	cout<<leng[g]<<endl;
	
	//初期化
	for(k=0;k<=n;k++)leng[k]=M,v[k]=0;
	leng[g]=0;
	
	//ダイクストラ法
	for(j=1;j<=n;j++){
		min=M;
		for(k=1;k<=n;k++) if(v[k]==0&&leng[k]<min) pp=k,min=leng[k];
		v[pp]=1;
		
		if(min==M)break;
		
		for(k=1;k<=n;k++){
			if((leng[pp]+ri[pp][k])<leng[k]) leng[k]=leng[pp]+ri[pp][k];
		}
	}
	kou+=leng[s];
//	cout<<leng[s]<<endl;
	
	cout<<b-e-kou<<endl;
	return 0;
}
