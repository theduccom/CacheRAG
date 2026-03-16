#include <bits/stdc++.h>
using namespace std;

bool is_prime[200000];
int cnt[50001];
vector<int> primes;

void calc_prime(int n){
	for(int i = 0; i <= n; ++i)
		is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;
	for(int i = 2; i <= n; ++i){
		if(is_prime[i]){
			primes.push_back(i);
			for(int j = i * 2; j <= n; j += i)
				is_prime[j] = false;
		}
	}
}

int main() {
	calc_prime(50000);
	for(int i = 0; i < primes.size(); ++i){
		for(int j = i; j < primes.size(); ++j){
			if(primes[i] + primes[j] > 50000)
				break;
			cnt[primes[i] + primes[j]]++;
		}
	}
	int n;
	while(cin >> n && n){
		cout << cnt[n] << endl;
	}
	return 0;
}