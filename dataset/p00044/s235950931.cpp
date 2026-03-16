#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

bool is_prime[50050];
int prime[50050];
int main() {
	memset(is_prime, 1, sizeof(is_prime));
	is_prime[0] = is_prime[1] = false;
	int p = 0;
	for (int i = 2; i < 50050; i++) {
		if (is_prime[i]) {
			prime[p++] = i;
			for (int j = i * 2; j < 50050; j += i)is_prime[j] = false;
		}
	}
	int n;
	while (cin >> n) {
		int i = lower_bound(prime, prime + p, n) - prime;
		cout << prime[i - 1] << ' ' << (prime[i] == n ? prime[i + 1] : prime[i]) << endl;
	}
	return 0;
}