#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

bool table[50101];
vector<int> primes;

int main() {
  table[2] = true;
  for (int i = 3; i <= 50100; i += 2)
    table[i] = true;
  for (int i = 3; i <= 224; i += 2)
    if (table[i])
      for (int j = 3 * i; j <= 50100; j += 2 * i)
        table[j] = false;
  primes.push_back(2);
  for (int i = 3; i <= 50100; i += 2)
    if (table[i])
      primes.push_back(i);
  int n;
  while (scanf("%d", &n) == 1) {
    int i = lower_bound(primes.begin(), primes.end(), n)-primes.begin();
    printf("%d %d\n", primes[i-1], primes[i] == n ? primes[i+1] : primes[i]);
  }
  return 0;
}