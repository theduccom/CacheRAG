#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int W, N;

	for (int h = 1; cin >> W&& W; h++) {
		cin >> N;
		int v, w;
		int dp[1001] = {};
		for (int i = 0; i < N; i++) {
			char c;
			cin >> v >> c >> w;
			for (int j = W; j > 0; j--) {
				if (j - w < 0)continue;
				dp[j] = max(dp[j], dp[j - w] + v);
			}
		}
		int a = 0, b = 0;
		for (int i = 0; i <= W; i++) {
			if (a < dp[i]) {
				a = dp[i];
				b = i;
			}
		}
		cout << "Case " << h << ":" << endl;
		cout << a << endl;
		cout << b << endl;
	}
	return 0;
}