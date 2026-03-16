#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  int v, n, c=0;
  int sumv=0, aven=0;
  while (scanf("%d,%d", &v, &n) == 2) {
    ++c;
    sumv += v*n;
    aven += n;
  }
  aven = (int)round((double)aven/c);
  printf("%d\n%d\n", sumv, aven);

  return 0;
}