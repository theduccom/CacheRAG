#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (ll)n; i++)
#define rep1(i, n) for (ll i = 1; i <= (ll)n; i++)
#define PI 3.14159265358979323846
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define pll pair<long long, long long>
using namespace std;
using ll = long long;
using ld = long double;

// ----本問について----
// 問題：凸 n 角形の面積
// 問題文URL：https://onlinejudge.u-aizu.ac.jp/problems/0079
// 所要時間：
// 学んだこと：
// ------------------

// ----ここから本問のソースコード----

// グローバル変数（入力）
vector<complex<ld>> cord;

// 入力
void input() {
  ld x, y;
  while (~scanf("%Lf,%Lf", &x, &y)) {
    cord.push_back(complex<ld>(x, y));
  }
}

ld cross_product(complex<ld> a, complex<ld> b) { return (conj(a) * b).imag(); }

void solve() {
  cout << fixed << setprecision(10);
  ll n = cord.size();
  rep1(i, n-1) { cord[i] -= cord[0]; }
  cord[0]-=cord[0];
  ld ans = 0.0;
  rep1(i, n - 2) { ans += cross_product(cord[i], cord[i + 1])/2.0; }
  cout << abs(ans) << endl;
}

int main() {
  input();
  solve();
  return 0;
}

