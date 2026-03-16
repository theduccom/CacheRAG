#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

const int SIZE = 50100;

int main(int argc, char *argv[]) {
	// make sieve
	vector<bool> sieve(SIZE, true);
	vector<int> prime;
	for (int i = 2; i < SIZE; i++) {
		if (sieve[i]) {
			prime.push_back(i);
			//printf("%d\n", i);
			for (int j = i+i; j < SIZE; j+=i) {
				sieve[j] = false;
			}
		}
	}
	sort(prime.begin(), prime.end());
	// load data
	int rcv;
	const int prime_size = static_cast<int>(prime.size());
	while (EOF != fscanf(stdin, "%d", &rcv)) {
		for (int i = 0; i < prime_size; i++) {
			if (prime[i] > rcv) {
				if (prime[i-1] != rcv)
					printf("%d %d\n", prime[i-1], prime[i]);
				else
					printf("%d %d\n", prime[i-2], prime[i]);
				break;
			}
		}
	}
	return 0;
}