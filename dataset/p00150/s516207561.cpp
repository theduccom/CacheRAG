#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)
#define size_of(a) (int)(a).size()

int main() {
	vector< int > primes;
	vector< bool > isp(10010, 1);
	
	for_(i,2,10010) {
		if (isp[i]) {
			primes.push_back(i);
			for (int j = 2 * i; j < 10010; j += i) isp[j] = 0;
		}
	}
	
	int n;
	while (cin >> n, n) {
		int p = -1;
		
		for_(i,0,size_of(primes)-1) {
			if (primes[i + 1] <= n && primes[i + 1] - primes[i] == 2) {
				p = primes[i + 1];
			}
		}
		
		cout << p - 2 << " " << p << endl;
	}
}