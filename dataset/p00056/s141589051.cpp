#include <iostream>

using namespace std;

bool isprime(int n) {
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return n != 1;
}

int main() {
	int n;
	bool prime[50000];
	for (int i = 2; i < 50000; i++)
		if (isprime(i))
			prime[i] = true;
		else
			prime[i] = false;
	while (cin >> n && n) {
		int ans = 0;
		for (int i = 2; i * 2 <= n; i++)
			if (prime[i] && prime[n-i])
				ans++;
		cout << ans << endl;
	}


	return 0;
}