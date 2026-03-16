#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define rep(i, n) for (int i = 0; i < n; ++i)
#define reps(i, m, n) for (int i = m; i <= n; ++i)
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1000000009;

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int b1, b2, b3; cin >> b1 >> b2 >> b3;
  if( (b1 == 1 && b2 == 1) || (b3 == 1) ) cout << "Open" << endl;
  else cout << "Close" << endl;
  return 0;
}

