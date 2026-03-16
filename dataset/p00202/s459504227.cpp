#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int MAX_N = 30;
const int MAX_X = 1000000 + 1;

int kin[MAX_N];
bool dp[MAX_X];

bool isPrime ( int n )
{
	for (int i = 2; i*i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return n >= 2;
}

int main ( void )
{
	vector<int> prime;
	prime.push_back(2);
	for (int i = 3; i < MAX_X; i+=2) {
		if (isPrime(i)) { prime.push_back(i); }
	}

	int n, x;

	while (cin >> n >> x, n | x) {
		fill(dp, dp+x, false);
		for (int i = 0; i < n; ++i) {
			cin >> kin[i];
		}

		dp[0] = true;
		for (int i = 0; i < x; ++i) {
			if (!dp[i]) { continue; }
			for (int j = 0; j < n; ++j) {
				if (i+kin[j] <= x) {
					dp[i+kin[j]] = true;
				}
			}
		}

		int ans;
		for (ans = x; ans >= 0; --ans) {
			if (dp[ans] && binary_search(prime.begin(), prime.end(), ans)) {
				break;
			}
		}

		if (ans < 0)
			cout << "NA" << endl;
		else
			cout << ans << endl;
	}

	return 0;
}