#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)

int main() {

	vector<int> prime;
	vector<bool> used(10001, false);
	used[0] = used[1] = true;
	for (int i = 2; i * i <= 10000; i++) {
		if (!used[i]) prime.push_back(i);
		used[i] = true;
		for (int j = i * 2; j <= 10000; j += i) {
			used[j] = true;
		}
	}
	REP(i, 10000 + 1) if (!used[i]) {
		prime.push_back(i);
		used[i] = true;
	}
	
	vector<int> ans;
	FOR(i, 1, prime.size()) {
		if (prime[i] == prime[i - 1] + 2) ans.push_back(prime[i]);
	}
	sort(ans.begin(), ans.end());
	
	int n;
	while (cin >> n, n) {
		int b = *(upper_bound(ans.begin(), ans.end(), n) - 1);
		int a = b - 2;
		cout << a << " " << b << endl;
	}
	return 0;
}