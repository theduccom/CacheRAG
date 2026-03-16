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
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

#define M 1000001

int main() {
	static char gosei[M] = {};

	//????????°???1???
	for (int i = 2; i <= sqrt(M); i++)
		if (gosei[i] == 0) {
			for (int j = 2, k = 0; (k = i*j) <= M; j++)
				gosei[k] = 1;
		}

	static char dp[M];
	for (int n, x; cin >> n >> x&&n&&x;) {
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;

		for (int i = 0; i < n; i++) {
			int b; cin >> b;
			for (int j = 0; j + b <= x; j++)
				if (dp[j]) dp[j + b] = 1;
		}

		bool NA = true;
		for (int i = x; i >= 1; i--) {
			if (dp[i] && !gosei[i]) {
				cout << i << endl;
				NA = false;
				break;
			}
		}
		if (NA)cout << "NA" << endl;
	}
	return 0;
}