#include<iostream>
#include<cstring>
using namespace std;

bool dp[1000010];
int n,x;
int cook[33];
int solve();
bool prime(int now);

int main(){
	while(1){
		cin >> n >> x;
		if(n == 0 && x == 0) break;
		memset(dp,false,x+2);
		dp[0] = true;
		for(int i=0;i<n;i++){
			cin >> cook[i];
			for(int k=cook[i];k<=x;k++){
				if(dp[k-cook[i]]){
					dp[k] = true;
				}
			}
		}
		int ans = solve();
		if(ans) cout << ans << endl;
		else cout << "NA" << endl;
	}
}

int solve (){
	int now = x;
	while(1){
		if(dp[now] && !(prime(now))) return now;
		now--;
	}
}

bool prime(int now) {
	for(int i=2;i*i<=now;i++){
		if(now%i == 0) return true;
	}
	return false;
}