#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

#define INF (1<<21)
#define swap(a,b) {a=a+b; b=a-b; a=a-b;}
#define abs(a) (a > 0 ? a:-a)
#define min(a,b) {a > b ? b:a}
#define max(a,b) {a > b ? a:b}
using namespace std;


#define MAX_W 1000
#define MAX_N 1000
#define MAX_VALUE 10000
#define MAX_WEIGHT 1000

int dp[MAX_W + 1];
void q42() {
	int W, N;
	int cnt = 1;
	for (; cin >> W;) {
		if (!W) break;

		cin >> N;
		vector<pair<int, int> > Item;
		for (int i = 0; i < N; i++) {
			int value, weight;
			char tmp;
			cin >> value >> tmp >> weight;
			Item.push_back(make_pair(value, weight));
		}

		for (int i = 0; i <= W; i++) {
			dp[i] = -1;
		}
		dp[0] = 0;

		for (int i = 0; i < N; i++) {
			int value = Item[i].first;
			int weight = Item[i].second;
			for (int j = W; j >= 0; j--) {
				if (j - weight < 0) continue;
				if (dp[j - weight] == -1) continue;
				dp[j] = max(dp[j], dp[j - weight] + value);
			}
		}

		int ans_value = 0, ans_weight = 0;
		for (int i = 0; i <= W; i++) {
			if (ans_value < dp[i]) {
				ans_value = dp[i];
				ans_weight = i;
			}
		}

		cout << "Case " << cnt++ << ":" <<"\n";
		cout << ans_value << "\n";
		cout << ans_weight << "\n";
	}
}

int main() {
	q42();
	return 0;
}