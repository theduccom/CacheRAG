#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 1000000000;
using namespace std;
bool sosu(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}
int main() {
  long long a[10010], n, m = 1;
  a[1] = 2;
  for (int i = 3; m < 10000; i++) {
    if (sosu(i)) {
      a[m + 1] = a[m] + i;
      m += 1;
    }
  }
  while (cin >> n, n)
    cout << a[n] << endl;
  return 0;
}