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
#include <map>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	vi isprime(100000, 1);
	isprime[0] = isprime[1] = 0;
	reep(i, 2, 500){
		if(isprime[i]){
			for(int j=i*2; j<100000; j+=i)
				isprime[j] = 0;
		}
	}

	vi prime;
	rep(i, isprime.size())
		if(isprime[i])
			prime.push_back(i);

	int n;
	while(scanf("%d", &n) != EOF){
		vi::iterator itr = lower_bound(prime.begin(), prime.end(), n);
		printf("%d %d\n", *(itr-1), *(itr+binary_search(prime.begin(), prime.end(), n)));
	}

	return 0;
}