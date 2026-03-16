#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    if (n == 0) break;
    int v[n + 1][n + 1];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> v[i][j];
      }
    }
    // x
    for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = 0; j < n; j++) {
        sum += v[i][j];
      }
      v[i][n] = sum;
    }
    // y
    for (int j = 0; j < n; j++) {
      int sum = 0;
      for (int i = 0; i < n; i++) {
        sum += v[i][j];
      }
      v[n][j] = sum;
    }
    int k = 0;
    for (int i = 0; i < n; i++) {
      k += v[n][i];
    }
    v[n][n] = k;

    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= n; j++) {
        cout << setw(5) << right << v[i][j];
      }
      cout << endl;
    }
  }
}

