#include <cstdio>
#include <cstring>
using namespace std;

int main() {
  char buf[101];
  bool sym;
  int l, c = 0;
  while (scanf("%101s", buf)==1) {
    l = strlen(buf);
    sym = true;
    for (int i=0; (i<<1)<l; i++) {
      if (buf[i] != buf[l-i-1]) {
        sym = false;
        break;
      }
    }
    if (sym) ++c;
  }
  printf("%d\n", c);
  return 0;
}