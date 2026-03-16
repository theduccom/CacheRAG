#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  for (;;) {
    int n, m, ps[1000];
    cin >> n >> m;
    if (!n && !m) return 0;
    int r = 0;
    for (int i = 0; i < n; i++)
      cin >> ps[i];
    sort(ps, ps+n);
    for (int i = 0; i < n; i++)
      r += ps[i];
    for (int i = n % m; i < n; i += m)
      r -= ps[i];
    cout << r << endl;
  }
}