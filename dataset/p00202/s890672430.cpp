#define _USE_MATH_DEFINES
#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>
#include<cmath>
#include<climits>
#include<map>
#include<string>
using namespace std;

bool is_prime[ (int)1e6+1 ];

int main(){
	fill_n(is_prime, 1e6+1, true);
	is_prime[0] = is_prime[1] = false;
	for(int i = 2; i <= 1e6; i++){
		if(!is_prime[i]) continue;
		for(int j = 2; i*j <= 1e6; j++) is_prime[i*j] = false;
	}

	int N, X;
	while(cin >> N >> X, N || X){
		int C[30], ans = -1;
		bool dp[ (int)1e6+1 ] = {};
		for(int i = 0; i < N; i++){
			cin >> C[i];
		}
		dp[0] = true;
		for(int j = 0; j < X; j++){
			if(!dp[j]) continue;
			for(int k = 0; k < N; k++){
				if(j + C[k] > X) continue;
				dp[j + C[k]] = true;
				if(is_prime[j + C[k]]) ans = max(ans, j + C[k]);
			}
		}
		if(ans == -1) puts("NA");
		else printf("%d\n", ans);
	}
	return 0;
}