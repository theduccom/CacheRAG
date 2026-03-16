#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  int n, m, M;
  int d[8];
  char c;
  scanf("%d\n", &n);
  for (int i=0; i<n; i++) {
    for(int j=0; j<8; j++) {
      scanf("%c", &c);
      d[j] = c - '0';
    }
    getchar();
    sort(d, d+8);
    m = 0;
    M = 0;
    for (int j=0; j<8; j++) {
      m *= 10;
      M *= 10;
      m += d[j];
      M += d[7-j];
    }
    printf("%d\n", M-m);
  }
  return 0;
}