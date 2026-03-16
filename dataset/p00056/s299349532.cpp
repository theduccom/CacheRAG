#include <iostream>
#include <cstring>
using namespace std;

int main() {
  bool p[50001];
  int n, c;

  memset(p, 0, sizeof(bool)*50001);
  for (int i=2; i*i<=50000; i++) {
    if (!p[i]) {
      for (int j=i*i; j<=50000; j+=i) {
        p[j] = true;
      }
    }
  }

  while ((cin >> n) && n) {
    c = 0;
    if (!p[n-2]) ++c;
    if (!(n%2)) {
      for (int i=3; (i<<1)<=n; i+=2) {
        if (!p[i] && !p[n-i]) ++c;
      }
    }
    cout << c << endl;
  }

  return 0;
}