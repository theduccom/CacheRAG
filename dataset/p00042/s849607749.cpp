#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;
void q42() {
	int w, n;
	int c = 0;
	for (; cin >> w >> n;) {
		char tmp[32];
		scanf("%c", &tmp[0]);
		c++;
		int value[1001];
		int weight[1001];
		int dp[1001];
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < n; i++) {
			int v_i, w_i;
			scanf("%d,%d", &v_i, &w_i);
			scanf("%c", &tmp[0]);
			value[i] = v_i;
			weight[i] = w_i;
		}
		for (int i = 0; i < n; i++) {
			for (int j = w; j >= weight[i]; j--) {
				dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
			}
		}
		int max_value = 0;
		int max_weight = 0;
		for (int i = 1; i <= w; i++) {
			if (dp[i] > max_value) {
				max_value = dp[i];
				max_weight = i;
			}
		}
		cout << "Case " << c << ":" << endl;
		cout << max_value << endl;
		cout << max_weight << endl;
	}
}

int main() {
	q42();
	return 0;
}