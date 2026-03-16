#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int XMAX = 1000000;
const int SQRTXMAX = sqrt(XMAX);

bool is_prime[XMAX + 1];
bool dp[XMAX + 1];
int cost[30];

int main() {
  // prime
  memset(is_prime, true, sizeof(is_prime));
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= SQRTXMAX; i++) {
    if (is_prime[i]) {
      int current = i * i;
      for (int j = i * i; j <= XMAX; j += i) {
        is_prime[j] = false;
      }
    }
  }

  int n, x;
  while (cin >> n >> x, n) {
    for (int i = 0; i < n; i++) cin >> cost[i];

    // dp
    int r = 0;
    dp[0] = true;
    for (int i = 1; i <= x; i++) {
      dp[i] = false;
      for (int j = 0; j < n; j++) {
        int k = i - cost[j];
        if (k >= 0 && dp[k]) {
          dp[i] = true;
          if (is_prime[i]) r = i;
          break;
        }
      }
    }

    if (r == 0) {
      cout << "NA" << endl;
    } else {
      cout << r << endl;
    }
  }
  return 0;
}