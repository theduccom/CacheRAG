#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAX_N = 100000;
bool sieve[MAX_N];
int n;

void solve() {
	int res = 0;

	for (int i = 2; i < n/2 + 1; i++) {
		if (sieve[i] && sieve[n-i]) {
			res++;
		}
	}
	cout<<res<<endl;
}

int main(int argc, const char *argv[]) {
	// make sieve
	//fill(sieve, sieve+MAX_N-1, true);
	memset(sieve, true, sizeof sieve);
	for (int i = 2; i < MAX_N; i++) {
		if (sieve[i]) {
			for (int j = i+i; j < MAX_N; j+=i) {
				sieve[j] = false;
			}
		}
	}

	// solve
	while (cin>>n, n) {
		solve();
	}	
	
	return 0;
}