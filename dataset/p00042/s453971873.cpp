#include <cstdio>
using namespace std;

struct pre{ int v, w; };

int max(int a, int b){
	return (a > b)? a : b;
}

int main(){
	const int MAX_N = 1000, MAX_W = 1000;
	int N, W;
	pre dat[MAX_N];
	int dp[MAX_N][MAX_W + 1];
	int p;
	
	for(int n = 1;; n++){
		scanf("%d", &W);
		if(W == 0) break;
		scanf("%d", &N);
		for(int i = 0; i < N; i++) scanf("%d,%d", &dat[i].v, &dat[i].w);
		
		for(int i = 0; i < MAX_N; i++){
			for(int j = 0; j < MAX_W; j++){
				dp[i][j] = 0;
			}
		}
		
		for(int i = dat[0].w; i <= W; i++) dp[0][i] = dat[0].v;
		for(int i = 1; i < N; i++){
			for(int j = 0; j <= W; j++){
				dp[i][j] = max((dat[i].w <= j)? dp[i - 1][j - dat[i].w] + dat[i].v : 0, dp[i - 1][j]);
			}
		}
		
		for(int i = 0; i <= W; i++){
			if(dp[N - 1][i] == dp[N - 1][W]){
				printf("Case %d:\n%d\n%d\n", n, dp[N - 1][W], i);
				break;
			}
		}
	}
	
	return 0;
}