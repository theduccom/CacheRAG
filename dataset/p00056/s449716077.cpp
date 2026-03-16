#include <iostream>
#include <algorithm>
#include <cstring>

#define rep2(i, s, n) for(int i=s; i < n; ++i)
#define rep(i, n) rep2(i, 0, n)
#define MEMZERO(x) memset(x, 0, sizeof(x))
#define MEMSET(x, y) memset(x, y, sizeof(x))

using namespace std;

bool isPrime[50000];
int prime[5150];
int count[50001];

void setPrime( bool *p, int n ) {
	p[0] = p[1] = false;
	rep2(i, 2, n) {
		if(!p[i]) continue;
		for(int j=i+i; j < n; j+=i) {
			p[j] = false;
		}
	}
}

int main( void )
{
	MEMZERO(prime);
	MEMSET(isPrime, true);
	setPrime(isPrime, 50000);
	int pnt = 1;
	prime[0] = 2;
	for(int i=3; i < 50000; i+=2) {
		if(isPrime[i]) {
			prime[pnt++] = i;
		}
	}

	MEMZERO(::count);
	rep(i, pnt) {
		rep2(j, i, pnt) {
			int pp = prime[i] + prime[j];
			if(pp < 50001) ++(::count[pp]);
		}
	}

	int n;
	
	while(cin >> n, n) {
		cout << ::count[n] << endl;
	}
	return 0;
}