#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

bool table[50001];
set<int> primes;

int main() {
  table[2] = true;
  for (int i = 3; i <= 50000; i += 2)
    table[i] = true;
  for (int i = 3; i <= 223; i += 2)
    if (table[i])
      for (int j = 3 * i; j <= 50000; j += 2 * i)
        table[j] = false;
  primes.insert(2);
  for (int i = 3; i <= 50000; i += 2)
    if (table[i])
      primes.insert(i);
  for (;;) {
    int n;
    cin >> n;
    if (!n) return 0;
    int r = 0;
    for (set<int>::iterator p = primes.begin(); p != primes.end(); ++p)
      if (2 * *p > n)
        break;
      else if (primes.count(n-*p))
        r++;
    cout << r << endl;
  }
  return 0;
}