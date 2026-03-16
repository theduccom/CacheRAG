#include <cstdio>
#include <cstring>
using namespace std;
const int PMAX = 120000;

int main() {
  bool isnp[PMAX+1];
  int p[10000];
  int x;
  memset(isnp, 0, sizeof(bool)*(PMAX+1));

  for (int i=2; i*i<=PMAX; i++) {
    if (!isnp[i]) {
      for (int j=2*i; j<=PMAX; j+=i) {
        isnp[j] = true;
      }
    }
  }
  p[0] = 2;
  x = 1;
  for (int i=3; i<=PMAX; i++) {
    if (!isnp[i]) {
      p[x] = p[x-1] + i;
      ++x;
    }
    if (x >= 10000) break;
  }

  while (scanf("%d", &x) && x) {
    printf("%d\n", p[x-1]);
  }
  return 0;
}