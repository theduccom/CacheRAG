#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

bool isso(long long int a) {
	if (a == 1 || a == 0)return false;
	for (long long int i = 2; i*i <= a; ++i) {
		if ((a%i)) {
		}
		else {
			return false;
		}
	}
	return true;
}
int main() {
	while (1) {
		int N, X; cin >> N >> X;
		if (!N)break;
		vector<int>as;
		for (int i = 0; i < N; ++i) {
			int a; cin >> a;
			as.emplace_back(a);
		}
		vector<int>oks(2000000);
		oks[0] = true;
		for (int i = 0; i <= X; ++i) {
			if (oks[i]) {
				for (int j = 0; j < N; ++j) {
					oks[i + as[j]] = true;
				}
			}
		}
		int ans = -1;
		for (int i = X; i >= 2; --i) {
			if (oks[i] && isso(i)) {
				ans = i;
				break;
			}
		}
		if (ans == -1)cout << "NA" << endl;
		else cout << ans << endl;
	}
	return 0;
}