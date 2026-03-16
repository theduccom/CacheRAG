#include<stdio.h>
#include <iostream>
#include <math.h>
#include <numeric>
#include <vector>
#include <map>
#include <functional>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <string>
#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <queue>
#include<iomanip>
#include<bitset>
#include<stack>
#include<set>
#include<limits>
#include <complex>
#include<cstdlib>
using namespace std;
vector<long long int> divisor(long long int n) {
	vector<long long int> res;
	for (long long int i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			res.push_back(i);
			if (i * i != n) res.push_back(n / i);
		}
	}
	sort(begin(res), end(res));
	return res;
}

int main() {
	int a = 1;
	while (1) {

		int W; cin >> W;

		if (W) {
			int N; cin >> N;
			vector<int>vs, ws;
			for (int i = 0; i < N; ++i) {
				string st; cin >> st;
				auto it = st.find(',');
				int a = stoi(st.substr(0, it));
				int b = stoi(st.substr(it + 1, st.size() - it - 1));
				vs.push_back(a);
				ws.push_back(b);
			}
			vector<vector<int>>dp(N + 1, vector<int>(W + 1,0));
			for (int i = 0; i < N; ++i) {
				for (int j = 0; j <= W; ++j) {
					if (j + ws[i] <= W) {
						dp[i + 1][j + ws[i]] = max(dp[i + 1][j + ws[i]], dp[i][j] + vs[i]);
					}
					dp[i + 1][j] = max(dp[i][j], dp[i + 1][j]);
				}
			}
			int amax = -1;
			int amin = 999999;
			for (int i = 0; i <= W; ++i) {
				amax = max(amax, dp[N][i]);
			}
			for (int i = 0; i <= W; ++i) {
				if (dp[N][i] == amax) {
					amin = i; break;
				}
			}
			cout << "Case " << a << ":" << endl;
			cout << amax << endl;
			cout << amin << endl;
			a++;
		}
		else {
			break;
		}
	}





	return 0;
}