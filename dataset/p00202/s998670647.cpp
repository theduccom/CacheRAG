#include <iostream>
#include <algorithm>
#include <cstring>
#define rep(i, a, n) for(int i = a;i < n;i++)
#define repr(i, a, n) for(int i = a;i > n;i--)
using namespace std;


int n, x;
int m[40];
int dp[1000010];
int p[1000000];


void sieve(){
	memset(p, 1, sizeof p);
	p[0] = p[1] = 0;
	for(int i = 2;i*i <= 1000000;i++){
		if(p[i]){
			for(int j = 2;i*j <= 1000000;j++)
				p[i*j] = 0;
		}
	}
}


void makeDP(){
	memset(dp, 0, sizeof dp);
	rep(i, 1, n+1){
		rep(j, 0, x+1){
			if(j >= m[i]) dp[j] = max(dp[j], dp[j-m[i]] + m[i]);
		}
	}
}


int main(){
	sieve();

	while(cin >> n >> x, n || x){
		rep(i, 1, n+1) cin >> m[i];

		makeDP();
		
		int ans = -1;
		repr(i, x, -1){
			if(p[dp[i]]){
				ans = dp[i];
				break;
			}
		}

		if(ans != -1) cout << ans << endl;
		else cout << "NA" << endl;
	}

	return 0;
}
