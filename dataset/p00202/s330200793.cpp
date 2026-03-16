#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool table[1000001], dp[1000001];
int cs[30];
vector<int> primes;

int main() {
  table[2] = true;
  for (int i = 3; i <= 1000000; i += 2)
    table[i] = true;
  for (int i = 3; i <= 1000; i += 2)
    if (table[i])
      for (int j = 3 * i; j <= 1000000; j += 2 * i)
        table[j] = false;
  primes.push_back(2);
  for (int i = 3; i <= 1000000; i += 2)
    if (table[i])
      primes.push_back(i);
  for (;;) {
    int n, x;
    cin >> n >> x;
    if (!n && !x) return 0;
    for (int i = 0; i < n; i++)
      cin >> cs[i];
    fill(dp, dp+x+1, false);
    dp[0] = true;
    for (int i = 1; i <= x; i++)
      for (int j = 0; j < n; j++)
        if (i - cs[j] >= 0 && dp[i-cs[j]]) {
          dp[i] = true;
          break;
        }
    bool f = true;
    for (int i = upper_bound(primes.begin(), primes.end(), x)-primes.begin()-1; i >= 0; i--)
      if (dp[primes[i]]) {
        f = false;
        cout << primes[i] << endl;
        break;
      }
    if (f)
      cout << "NA" << endl;
  }
  return 0;
}