#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
	int w, n, cnt = 1;
	char dum;
	vector< vector< int > > dp;
	vector< int > weight, value;
	
	while(cin >> w, w){
		cin >> n;
		
		weight.resize(n);
		value.resize(n);
		
		for(int i = 0; i < n; ++i){
			scanf("%d,%d", &(value[i]), &(weight[i]));
		}
		
		dp.resize(n + 1);
		for(int i = 0; i <= n; ++i){
			dp[i].resize(w + 1);
		}
		
		for(int i = 0; i <= w; ++i) dp[0][i] = 0;
		
		for(int i = 1; i <= n; ++i){
			for(int j = 0; j <= w; ++j){
				if(weight[i-1] > j){
					dp[i][j] = dp[i-1][j];
				}else{
					dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i-1]] + value[i-1]);
				}
			}
		}
		
		cout << "Case " << cnt << ":" << endl;
		cout << dp[n][w] << endl;
		for(int i = 0; i <= w; ++i){
			if(dp[n][i] == dp[n][w]){
				cout << i << endl;
				break;
			}
		}
		
		++cnt;
	}
}