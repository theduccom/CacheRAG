#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  int l[11], v1, v2;
  while (scanf("%d", l+1) == 1) {
    l[0] = 0;
    for (int i = 2; i < 11; i++) {
      scanf(",%d", l+i);
      l[i] += l[i-1];
    }
    scanf(",%d,%d\n", &v1, &v2);
    printf("%d\n", lower_bound(l, l+11, double(l[10]*v1)/double(v1+v2))-l);
  }
  return 0;
}