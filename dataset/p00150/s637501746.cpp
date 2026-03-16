#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool isPrime(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}
int main() {

	while (1) {
		int n;
		cin >> n;
		if (n == 0) break;

		for (int i = n - 2; i >= 0; i--) {
			if (isPrime(i) && isPrime(i + 2)) {
				cout << i << " " << i + 2 << endl;
				break;
			}
		}
	}
	return 0;
}
