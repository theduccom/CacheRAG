#include<iostream>
#include<math.h>
using namespace std;

int main() {
	bool prime[500000] = { false };
	for (int i = 2; i <= sqrt(500000); i++) {
		if (!prime[i]) {
			for (int j = 2; j*i <= 500000; j++) {
				prime[j*i] = true;
			}
		}
	}
	int n; unsigned int sum;
	while (cin >> n) {
		if (n == 0)break;
		sum = 0; int count = 0;
		for (int i = 2;; i++) {
			if (!prime[i]) { sum += i; count++; }
			if (count == n)break;
		}
		cout << sum << endl;
	}
}
