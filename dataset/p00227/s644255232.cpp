#include<bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;

int main()
{
  int n, m, p[1000];
  while(cin >> n >> m, n) {
    for(int i = 0; i < n; i++) {
      cin >> p[i];
    }
    sort(p, p + n);
    int ret = accumulate(p, p + n, 0);
    for(int i = n - m; i >= 0; i -= m) {
      ret -= p[i];
    }
    cout << ret << endl;
  }
}