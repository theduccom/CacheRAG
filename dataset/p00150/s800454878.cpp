#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define int long long

using namespace std;

class Solver {
};
signed main() {
	vector<bool> isPrime(10005, true);
	vector<int> primes;
	for (int i = 2; i < isPrime.size(); i++) {
		if (!isPrime[i])continue;

		primes.emplace_back(i);

		for (int j = 2; i * j < isPrime.size(); j++) {
			isPrime[i * j] = false;
		}
	}

	vector<int> vals;
	for (int i = 1; i < primes.size(); i++) {
		if (primes[i] - primes[i - 1] == 2)vals.emplace_back(primes[i]);
	}

	while (true) {
		int n;
		cin >> n;
		if (n == 0)break;

		int max = 0;
		for (int i = 0; i < vals.size(); i++) {
			if (vals[i] > n)break;
			max = vals[i];
		}
		cout << max - 2 << ' ' << max << endl;
	}
}
