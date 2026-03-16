#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  int n, c2, c5, t;
  while (scanf("%d", &n) && n) {
    c2 = c5 = 0;
    t = 2;
    while (t <= n) {
      c2 += n / t;
      t *= 2;
    }
    t = 5;
    while (t <= n) {
      c5 += n / t;
      t *= 5;
    }
    printf("%d\n", min(c2, c5));
  }
  return 0;
}