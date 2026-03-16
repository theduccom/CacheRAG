#include <iostream>
using namespace std;

int n, x;
int a[30];
bool b[1000001];
bool p[1000001];

bool input() {
  cin >> n >> x;
  if (!n && !x) {
    return false;
  }
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  return true;
}

void solve() {
  for (int i = 0; i <= x; ++i) {
    b[i] = false;
    p[i] = true;
  }

  b[0] = true;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= x - a[i]; ++j) {
      if (b[j]) {
        b[j + a[i]] = true;
      }
    }
  }

  p[0] = p[1] = false;
  for (int i = 2; i * i <= x; ++i) {
    if (!p[i]) {
      continue;
    }
    for (int j = i + i; j <= x; j += i) {
      p[j] = false;
    }
  }

  int ans = -1;
  for (int i = x; i >= 0; --i) {
    if (b[i] && p[i]) {
      ans = i;
      break;
    }
  }

  if (ans >= 0) {
    cout << ans << endl;
  } else {
    cout << "NA" << endl;
  }
}

int main() {
  while (input()) {
    solve();
  }
  return 0;
}