#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <bool> prime(110000, false);
	prime[2] = true;
	for (int i = 3; i < 110000; i += 2) {
		prime[i] = true;
	}
	for (int i = 3; i < 110000; i += 2) {
		for (int j = i + i; j <= 110000; j += i) {
			prime[j] = false;
		}
	}
	int n;
	while (cin >> n && n > 0) {
		int sum = 2;
		int cnt = 1;
		for (int i = 3; cnt < n; i += 2) {
			if (prime[i]) {
				sum += i;
				cnt++;
			}
		}
		cout << sum << endl;
	}
}