#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 999999999
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vpii> vvpii;
bool sosu(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}
int main() {
  int n, x;
  while (cin >> n >> x, n) {
    bool dp[1000001] = {};
    dp[0] = 1;
    int a[50];
    rep(i, n) { cin >> a[i]; }
    rep(i, n) rep(j, x) {
      if (j + a[i] < 1000001)
        if (dp[j])
          dp[j + a[i]] = 1;
    }
    for (int i = x; i > 1; i--) {
      if (dp[i])
        if (sosu(i)) {
          cout << i << endl;
          goto end;
        }
    }
    cout << "NA" << endl;
  end:;
  }
  return 0;
}