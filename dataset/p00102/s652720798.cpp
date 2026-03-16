#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main() {
  int n, i, j, a[10], b, c, x;
  while (cin >> n && n > 0) {
    memset(a, 0, sizeof(a));
    c = 0;
    for (i = 0; i < n; i++) {
      b = 0;
      for (j = 0; j < n; j++) {
        scanf("%d", &x);
        printf("%5d", x);
        a[j] += x;
        b += x;
      }
      printf("%5d\n", b);
    }
    for (i = 0; i < n; i++) {
      printf("%5d", a[i]);
      c += a[i];
    }
    printf("%5d\n", c);
  }
  return 0;
}