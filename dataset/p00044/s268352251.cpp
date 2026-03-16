#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
const int PRIME_MAX = 51000;

int main() {
  vector<int> primes(PRIME_MAX);
  iota(primes.begin(), primes.end(), 0);
  primes[0] = primes[1] = -1;
  for (int i = 2; i * i <= PRIME_MAX; i++) {
    if (primes[i] == -1) {
      continue;
    }
    for (int j = (i << 1); j < PRIME_MAX; j += i) {
      primes[j] = -1;
    }
  }
  primes.erase(remove(primes.begin(), primes.end(), -1), primes.end());

  int n;
  while (cin >> n) {
    cout << *(lower_bound(primes.begin(), primes.end(), n) - 1) << ' ' << *(upper_bound(primes.begin(), primes.end(), n)) << endl;
  }
  return 0;
}