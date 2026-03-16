#include <cstdio>
using namespace std;

int main() {
  int l[10];
  int v[2];
  int s[11];
  int r;
  double x;

  while (1) {
    for (int i=0; i<10; i++) {
      scanf("%d,", &l[i]);
    }
    r = scanf("%d,%d", &v[0], &v[1]);
    if (r == EOF) break;

    s[0] = 0;
    for (int i=0; i<10; i++) {
      s[i+1] = s[i]+l[i];
    }
    x = (double)s[10] * v[0] / (v[0] + v[1]);
    for (int i=0; i<=10; i++) {
      if (s[i] >= x) {
        r = i;
        break;
      }
    }
    printf("%d\n", r);
  }

  return 0;
}