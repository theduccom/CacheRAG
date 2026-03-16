#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <iostream>
#include <map>
#include <functional>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

void eratos(int n, vi& a)
{
	vi isprime(n+1, 1);
	isprime[0] = isprime[1] = 0;
	reep(i, 2, n){
		if(isprime[i]){
			for(int j=i*2; j<=n; j+=i)
				isprime[j] = 0;
		}
	}

	rep(i, n+1){
		if(isprime[i])
			a.push_back(i);
	}
}

int main()
{
	vi prime;
	eratos(104743, prime);
	reep(i, 1, prime.size())
		prime[i] += prime[i-1];

	int n;
	while(scanf("%d", &n), n)
		printf("%d\n", prime[n-1]);

	return 0;
}