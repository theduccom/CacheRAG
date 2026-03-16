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
  int b, ans[4] = {};
  string s;
  char a;
  while (cin >> b >> a >> s) {
    if (s == "A")
      ans[0]++;
    else if (s == "B")
      ans[1]++;
    else if (s == "O")
      ans[3]++;
    else
      ans[2]++;
  }
  rep(i, 4) { cout << ans[i] << endl; }
  return 0;
}