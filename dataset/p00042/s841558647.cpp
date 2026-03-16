#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
	int w, n, p = 1;
	while(cin >> w, w){
		cin >> n;
		vector<pair<int, int> > t(n);
		for(int i=0; i< n; i++) scanf("%d,%d", &t[i].first, &t[i].second);
		long long dp[1010][1010];
		for(int i=0; i < 1010; i++) for(int j=0; j< 1010; j++) dp[i][j] = 0;
		for(int i=n-1; 0 <= i; i--){
			for(int j=0; j <= w; j++){
				if(j < t[i].second) dp[i][j] = dp[i+1][j];
				else dp[i][j] = max(dp[i+1][j], dp[i+1][j-t[i].second] + t[i].first);
			}
		}
		cout << "Case " << p++ << ":" << endl;
		cout << dp[0][w] << endl;
		for(int i = w; ; i--){
			if(dp[0][i] != dp[0][w]){cout << i+1 << endl; break;}
		}
	}
}