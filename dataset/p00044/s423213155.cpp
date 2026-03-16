#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>


int main() {
	int n;
	bool a;
	std::vector<int> prime;
	prime.emplace_back(2);
	for (int i = 3; i < 1000000; i += 2) {
		a = false;
		for (int j = 3; j <= std::sqrt(i); j += 2) {
			if (i%j == 0) {
				a = true;
			}
		}
		if (a == false) {
			prime.emplace_back(i);
		}
	}
	while (std::cin >> n) {
		int ans = 0;
		int low = 0, high = 0;
		for (int i = 0; i < prime.size(); i++) {
			if (prime[i] < n) {
				low = prime[i];
			}
			if (prime[i] > n) {
				high = prime[i];
				break;
			}
		}
		std::cout << low << " " << high << std::endl;
	}
}