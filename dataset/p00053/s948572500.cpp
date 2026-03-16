#include <bits/stdc++.h>
using namespace std;

bool is_prime[200001];
long long sum[10010];

void calc_prime(int n){
	for(int i = 0; i <= n; ++i)
		is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;
	int c = 1;
	for(int i = 2; i <= n; ++i){
		if(is_prime[i]){
			sum[c] = sum[c - 1] + i;
			c++;
			for(int j = i * 2; j <= n; j += i)
				is_prime[j] = false;
		}
	}
}

int main() {
	calc_prime(200000);
	int n;
	while(cin >> n && n){
		printf("%lld\n", sum[n]);
	}
	return 0;
}