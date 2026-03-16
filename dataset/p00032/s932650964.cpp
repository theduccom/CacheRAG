#include <cstdio>

using namespace std;

int main() {
  int a, b, c, r = 0, e = 0;
  while (scanf("%d,%d,%d", &a, &b, &c) == 3) {
    if (a*a + b*b == c*c) r++;
    if (a == b) e++;
  }
  printf("%d\n%d\n", r, e);
  return 0;
}