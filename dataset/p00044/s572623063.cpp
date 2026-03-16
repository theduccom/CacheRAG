#include <bits/stdc++.h>
using namespace std;

vector<int> primes;
bool is_prime[100010];

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
	calc_prime(100000);
	int n;
	while(cin >> n){
		auto it = lower_bound(primes.begin(), primes.end(), n);
		cout << *(it - 1) << " ";
		if(*it == n)
			cout << *(it + 1) << endl;
		else
			cout << *it << endl;
	}
	return 0;
}