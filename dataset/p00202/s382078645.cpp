#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <functional>

using namespace std;

int main() {
	int n, x;
	vector<int> furui(1000000+1, 0);
	furui[0] = furui[1] = 1;
	for (int i = 2; i*i <= 1000000; i++) {
		if (furui[i] == 0) {
			for (int j = 2; i*j <= 1000000; j++) {
				furui[i*j] = 1;
			}
		}
	}
	while (cin >> n >> x) {
		if (n == 0 && x == 0) {
			break;
		}
		vector<int> en;
		priority_queue<int, vector<int>, greater<int> > pq;
		vector<int> dp(x+1, 0);
		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			if (k > x || k == 0) {
				continue;
			}
			dp[k] = 1;
			pq.push(k);
		}
		if (!pq.empty()) {
			int p = pq.top();
			pq.pop();
			en.push_back(p);
		}
		while (!pq.empty()) {
			int k = pq.top();
			pq.pop();
			bool hantei2 = true;
			for (int i = 0; i < en.size(); i++) {
				if (k % en[i] == 0) {
					hantei2 = false;
					break;
				}
			}
			if (hantei2) {
				en.push_back(k);
			}
		}
		for (int i = 0; i < en.size(); i++) {
			for (int j = 0; j <= x; j++) {
				if (j < en[i]) {
				} else {
					dp[j] = max(dp[j], dp[j-en[i]]);
				}
			}
		}
		bool hantei = true;
		for (int i = x; i >= 0; i--) {
			if (dp[i] > 0 && furui[i] == 0) {
				cout << i << endl;
				hantei = false;
				break;
			}
		}
		if (hantei) {
			cout << "NA" << endl;
		}
	}
	return 0;
}