#include <bits/stdc++.h>
using namespace std;
#define N (50500)

bool prime[N + 1];

int main()
{
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	
	for (int i = 2; i * i <= N; i++){
		for (int j = i * i; j <= N; j += i){
			prime[j] = false;
		}
	}
	
	int n;
	while (~scanf("%d", &n)){
		int l = n - 1;
		while (!prime[l]) l--;
		int r = n + 1;
		while (!prime[r]) r++;
		printf("%d %d\n", l, r);
	}
	
	return 0;
}