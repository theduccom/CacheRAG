#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  int x, y, z, n, r, a, b, c;

  while (1) {
    scanf("%d %d %d", &x, &y, &z);
    if (!x && !y && !z) break;
    scanf("%d", &n);
    if (x>y && x>z) {
      a = y;
      b = z;
    } else if (y>z) {
      a = z;
      b = x;
    } else {
      a = x;
      b = y;
    }
    c = floor(sqrt((a*a+b*b)*0.25))+1;
    for (int i=0; i<n; i++) {
      scanf("%d", &r);
      if (r < c) {
        printf("NA\n");
      } else {
        printf("OK\n");
      }
    }
  }

  return 0;
}