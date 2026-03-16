#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(10);
  
  int a, b, c;
  cin >> a >> b >> c;
  if ((a && b && !c) || (!a && !b && c)) cout << "Open" << endl;
  else cout << "Close" << endl;

  return 0;
}
