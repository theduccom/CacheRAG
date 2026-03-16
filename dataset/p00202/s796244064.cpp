#include<cstdio>
#include<algorithm>
#include<functional>
#include<cstring>
#include<iostream>
#include<cmath>
#include<queue>
#include<cctype>
#include<string>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define INF 2100000000
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define lb lower_bound
#define ub upper_bound
#define SS stringstream
#define sz(x) ((int)(x).size())
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )
#define clr(a,b) memset((a),(b),sizeof(a))
int kin[4545],flg[4545454],dp[4545454];	
void sosu()
{
	for(int i=2;i<=1000000;i++) flg[i]=1;
	for(int i=2;i*i<=1000000;i++){
		if(flg[i]==1){
			for(int j=2;j*i<1000000;j++) flg[i*j]=0;
		}
	}
}
int main(void)
{
	sosu();
	int n,x,ff;
	while(cin>>n>>x) {
		if(!n&&!x) break;
		rep(i,0,n) cin>>kin[i];
		rep(i,0,x+1) dp[i]=0;
		dp[0]=1;
		rep(i,0,n) {
			rep(j,0,x) {
				if(dp[j]==1) {
					if(j+kin[i]<=x) dp[j+kin[i]]=1;
				}
			}
		}
		ff=0;
		for(int i=x;i>=2;i--) {
			if(dp[i]&&flg[i]) {cout<<i<<endl,ff=1;break;}
		}
		if(ff==0) cout<<"NA"<<endl;
	}
	return 0;
}
	
	
	
	
	

	