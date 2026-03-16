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
	ll i,j,n,m;
	ll s,g,v,pp;
	ll ri[21][21];
	ll leng[21],flg[21];
	ll min,ki,sam;
	PP p[100];
	scanf("%lld %lld",&n,&m);
	for(i=0;i<m;i++) scanf("%lld,%lld,%lld,%lld",&p[i].ff,&p[i].fs,&p[i].sf,&p[i].ss);
	scanf("%lld,%lld,%lld,%lld",&s,&g,&v,&pp);
	sort(p,p+m);
	for(i=0;i<=n;i++) for(j=0;j<=n;j++) ri[i][j]=M;
	for(i=0;i<m;i++) ri[p[i].ff][p[i].fs]=p[i].sf,ri[p[i].fs][p[i].ff]=p[i].ss;
	for(i=0;i<=n;i++) flg[i]=0,leng[i]=M;
	leng[s]=0;
	for(i=0;i<=n;i++){
		min=M;
		for(j=0;j<=n;j++){
			if(flg[j]==0&&leng[j]<min){
				min=leng[j];
				ki=j;
			}
		}
		flg[ki]=1;
		for(j=0;j<=n;j++){
			if(min+ri[ki][j]<leng[j]){
				leng[j]=min+ri[ki][j];
			}
		}
	}
	sam=leng[g];
	//printf("%d\n",leng[g]);
	for(i=0;i<=n;i++) flg[i]=0,leng[i]=M;
	leng[g]=0;
	for(i=0;i<=n;i++){
		min=M;
		for(j=0;j<=n;j++){
			if(flg[j]==0&&leng[j]<min){
				min=leng[j];
				ki=j;
			}
		}
		flg[ki]=1;
		for(j=0;j<=n;j++){
			if(min+ri[ki][j]<leng[j]){
				leng[j]=min+ri[ki][j];
			}
		}
	}
	//printf("%d\n",leng[s]);
	sam=v-pp-leng[s]-sam;
	printf("%d\n",sam);
	return 0;
}
