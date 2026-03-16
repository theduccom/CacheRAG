#include <cstring>
#include <iostream>
using namespace std;

const int PRIME_MAX = 1000001;
bool isPrime[PRIME_MAX];
void init() {
	fill(isPrime, isPrime + PRIME_MAX, true);
	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i * i <= PRIME_MAX; i++) {
		if (!isPrime[i]) continue;
		for (int j = (i << 1); j < PRIME_MAX; j += i) {
			isPrime[j] = false;
		}
	}
}

int main () {
	init();
	int n, x;
	while (cin >> n >> x, n || x) {
		int menu[n];
		bool dp[x + 1];
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < n; i++) {
			cin >> menu[i];
		}
		dp[0] = true;
		int result = 0;
		for (int i = 0; i <= x; ++i) {
			if (dp[i]) {
				for (int j = 0; j < n; ++j) {
					if (i + menu[j] <= x) {
						dp[i + menu[j]] = true;
					}
				}
				if (isPrime[i]) result = i;
			}
		}
		if (result == 0) {
			cout << "NA" << endl;
		}
		else {
			cout << result << endl;
		}
	}
	return 0;
}