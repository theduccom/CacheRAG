#include <cstdio>
#include <cmath>

using namespace std;

int main() {
  int v, n, sv = 0, sn = 0, c = 0;
  while (scanf("%d,%d", &v, &n) == 2) {
    sv += v*n;
    sn += n;
    c++;
  }
  printf("%d\n%d\n", sv, int(round(double(sn)/c)));
  return 0;
}