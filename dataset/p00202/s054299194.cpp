#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int n,x,ans;
int t[30];
char dp[1000001];
char p[1000001];

void mkPrime(void){
	memset(p,1,sizeof(p));
	p[0] = p[1] = 0;

	for(int i=2;i<=1000000;i++){
		if(p[i]){
			for(int j=i*2;j<=1000000;j+=i){
				p[j] = 0;
			}
		}
	}
}

void solve(void){
	dp[0] = 1;
	for(int i=0;i<x;i++){
		if(dp[i]){
			for(int j=0;j<n;j++){
				int sum = i + t[j];
				if(sum <= x){
					dp[sum] = 1;
				}
			}
		}
	}

	for(int i=0;i<=x;i++){
		if(dp[i] && p[i] && i > ans) ans = i;
	}
}

int main(void){
	mkPrime();

	while(cin>>n>>x && (n||x)){
		for(int i=0;i<n;i++) cin>>t[i];

		memset(dp,0,sizeof(dp));
		ans = 0;

		solve();

		if(ans == 0) cout<<"NA\n";
		else cout<<ans<<endl;
	}

	return 0;
}