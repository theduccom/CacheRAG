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

set<int> prime;
void eratos(int n)
{
	vi isprime(n+1, 1);
	isprime[0] = isprime[1] = 0;
	reep(i, 2, n+1){
		if(isprime[i]){
			for(int j=i*2; j<=n; j+=i)
				isprime[j] = 0;
		}
	}

	rep(i, n+1){
		if(isprime[i])
			prime.insert(i);
	}
}

int main()
{
	eratos(50000);

	int n;
	while(scanf("%d", &n), n){
		int cnt = 0;
		for(set<int>::iterator itr = prime.begin(); itr != prime.end() && *itr*2<=n; ++itr){
			cnt += prime.count(n-*itr);
		}
		printf("%d\n", cnt);
	}

	return 0;
}