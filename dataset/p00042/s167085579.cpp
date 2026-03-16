#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int dataset = 1, w;
	while (cin >> w, w){
		int dp[1001], n, treas_val[1000], treas_w[1000], ans_val = 0, ans_w;
		for (int i = 0; i <= w; i++){
			dp[i] = -1;
		}
		cin >> n;
		for (int i = 0; i < n; i++){
			scanf("%d,%d", &treas_val[i], &treas_w[i]);
		}
		dp[0] = 0;
		for (int i = 0; i < n; i++){
			for (int j = w; j >= 0; j--){
				if (dp[j] == -1) continue;
				if (j + treas_w[i] <= w && dp[j + treas_w[i]] < dp[j] + treas_val[i])
					dp[j + treas_w[i]] = dp[j] + treas_val[i];
			}
		}
		for (int i = 0; i <= w; i++){
			if (ans_val < dp[i]){
				ans_val = dp[i];
				ans_w = i;
			}
		}
		printf("Case %d:\n%d\n%d\n", dataset, ans_val, ans_w);
		dataset++;
	}
	return 0;
}