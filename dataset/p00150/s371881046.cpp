#include <bits/stdc++.h>
using namespace std;

vector<int> sieve_of_eratosthenes(int n) {
  vector<int> primes(n);
  for (int i = 2; i < n; ++i)
    primes[i] = i;
  for (int i = 2; i*i < n; ++i)
    if (primes[i])
      for (int j = i*i; j < n; j+=i)
        primes[j] = 0;
  return primes;
}

int main() {
  int a;
  while (cin >> a, a) {
    vector<int> p = sieve_of_eratosthenes(a + 1);
    for (int i = a; i > 2; --i) {
      if (p[i - 2] && p[i]) {
        cout << i - 2 << ' ' << i << endl;
        break;
      }
    }
  }
  return 0;
}

