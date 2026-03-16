#include <iostream>
#include <algorithm>
#include <cstring>

constexpr int MAX_N = 31, MAX_C = 1000001;
int n, max;
int cost[MAX_N];
bool dp[MAX_C];
bool prime_num[MAX_C];

int main() {
	while (1) {
		std::cin >> n >> max;
		if (n + max == 0)
			break;
		std::memset(prime_num, false, sizeof(prime_num));
		std::memset(dp, false, sizeof(dp));
		for (int i = 0; i < n; ++i)
			std::cin >> cost[i];
		for (int i = 2; i * i <= max; ++i) {
			if (!prime_num[i]) {
				for (int j = 2; i*j <= max; ++j)
					prime_num[i*j] = true;
			}
		}
		int ans = 0;
		for (int i = 0; i < n; ++i)
			dp[cost[i]] = true;

		for (int i = 1; i <= MAX_C; ++i) {
			for (int j = 0; j < n; ++j) {
				if (i + cost[j] <= max&&dp[i])
					dp[i + cost[j]] = true;
			}
		}

		for (int i = max; i >= 0; --i) {
			if (dp[i] && !prime_num[i]) {
				ans = i; 
				break;
			}
		}
		if (!ans)
			std::cout << "NA" <<std::endl;
		else
			std::cout << ans << std::endl;
	}
	return 0;
}