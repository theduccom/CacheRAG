#include<iostream>
#include<cmath>

double dp[1000] = { 0 };

int height(double v) {
	for (int i = 2; i < 1000; i++) {
		if (dp[i] == 0) {
			double t = std::sqrt((5 * i - 5) / 4.9);
			dp[i] = 9.8 * t;
		}
		if (dp[i] >= v) return i;
	}
	return 0;
}

int main() {
	double v;
	while (std::cin >> v) {
		std::cout << height(v) << std::endl;
	}
	return 0;
}
