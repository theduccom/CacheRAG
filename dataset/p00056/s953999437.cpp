#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<bool> prime(50001, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i <= 223; i++) {
		if (prime[i]) {
			for (int j = i * 2; j <= 50000; j += i) {
				prime[j] = false;
			}
		}
	}
	int n, res;
	while (cin >> n, n) {
		res = 0;
		if (n % 2) {
			if (prime[n - 2])
				res = 2;
		}
		else if (n == 4) {
			res = 2;
		}
		else {
			for (int i = 3; i <= n - 3; i += 2) {
				if (prime[i] && prime[n - i]) {
					res++;
					if (i == n - i)
						res++;
				}
			}
		}
		cout << res / 2 << endl;
	}
	return 0;
}