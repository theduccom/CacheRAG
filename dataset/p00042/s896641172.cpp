#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
const int MAX_N = 1000, MAX_W = 1000;

int main(){
	int dp[MAX_N+1][MAX_W+1], wdp[MAX_N+1][MAX_W+1];
	int W,N,v[MAX_N],w[MAX_N],C = 1;
	while(cin >> W,W){
		memset(dp,0,sizeof(dp));
		memset(v,0,sizeof(v));
		memset(w,0,sizeof(w));
		std::cin >> N;
	for(int i=0;i<N;i++){
		int a,b;
		scanf("%d,%d",&a,&b);
		v[i] = a, w[i] = b;
	}
	for(int i=N-1;i>=0;i--){
		for(int j=0;j<=W;j++){
			if(w[i] > j)
				dp[i][j] = dp[i+1][j];
			else{
				dp[i][j] = max(dp[i+1][j],dp[i+1][j-w[i]] + v[i]);
			}
		}
	}
	int wmv;
	for(int i=0;i<=W;i++){
		if(dp[0][i] == dp[0][W]){wmv = i;break;}
	}
	cout << "Case " << C++ << ":" << endl << dp[0][W] << endl << wmv << endl;
	}
	return 0;
}