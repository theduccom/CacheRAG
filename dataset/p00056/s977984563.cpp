#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef pair<int, int>P;

bool is_prime[50001];
int main() {
	memset(is_prime, 1, sizeof(is_prime));
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= 50000; i++) {
		if (is_prime[i]) {
			for (int j = i * 2; j <= 50000; j += i)is_prime[j] = false;
		}
	}
	int n;
	while (cin >> n, n) {
		int cnt = 0;
		for (int i = 2; i <= n / 2; i++) {
			if (is_prime[i] && is_prime[n - i])cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}