#include <vector>
#include <iostream>

double sqrt(const int &n) {
	double a = n, b = 1;
	while ((a - b) * (a - b) < 0.1) {
		double min = (a + b) / 2;
		if (min * min > n) {
			a = min;
		}
		else {
			b = min;
		}
	}
	return a;
}
std::vector<bool> cul_prime(const int &n) {
	std::vector<bool> prime(n + 1, true);
	prime.at(0) = false;
	prime.at(1) = false;
	double root = sqrt(n) + 1;
	for (auto i = 2; i <= n >> 1; ++i) {
		prime.at(i << 1) = false;
	}
	for (auto i = 3; i < root; i += 2) {
		if (prime.at(i)) {
			for (auto j = 2; j <= n / i; ++j) {
				prime.at(i * j) = false;
			}
		}
	}
	return prime;
}
int main() {
	int n, x;
	std::cin >> n >> x;
	while (n != 0) {
		std::vector<bool> num(x + 1, false);
		std::vector<int> menu;
		for (auto i = 0; i < n; ++i) {
			int price;
			std::cin >> price;
			menu.push_back(price);
		}
		int max = 0;
		auto prime = cul_prime(x);
		num.at(0) = true;
		for (const auto &i : menu) {
			for (auto j = 0; j <= x - i; ++j) {
				if (num.at(j)) {
					if (j + i <= x) {
						num.at(j + i) = true;
						if (max < j + i && prime.at(j + i)) {
							max = j + i;
						}
					}
				}
			}
		}
		if (max == 0) {
			std::cout << "NA\n";
		}
		else {
			std::cout << max << "\n";
		}
		std::cin >> n >> x;
	}
	return 0;
}