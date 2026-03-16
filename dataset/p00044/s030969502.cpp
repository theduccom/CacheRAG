#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;

vector<int> sieve(int n) {
	vector<int> res(1, 2);
	vector<bool> prime(n, true);
	for(int i = 3; i < n; i += 2) {
		if(prime[i]) {
			res.push_back(i);
			for(int j = i * 3; j < n; j += i * 2)
				prime[j] = false;
		}
	}

	return res;
}

int main() {
	vector<int> prime = sieve(51000);

	for(int n; scanf("%d", &n) == 1;) {
		int idx = lower_bound(prime.begin(), prime.end(), n) - prime.begin();
		if(prime[idx] == n)
			printf("%d %d\n", prime[idx - 1], prime[idx + 1]);
		else
			printf("%d %d\n", prime[idx - 1], prime[idx]);
	}

	return EXIT_SUCCESS;
}