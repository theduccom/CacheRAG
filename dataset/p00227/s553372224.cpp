#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;

int n, m;
int p[1010];

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(10);
  
  while (cin >> n >> m, n) {
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }
    sort(p, p + n, greater<int>());
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if ((i + 1) % m == 0) continue;
      ans += p[i];
    }
    cout << ans << endl;
  }  

  return 0;
}
