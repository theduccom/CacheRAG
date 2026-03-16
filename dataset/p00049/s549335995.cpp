#include <cstdio>
#include <cstring>
using namespace std;

int main() {
  int n, c[4];
  char bt[10];
  const char *label[4] = {"A", "B", "AB", "O"};

  memset(c, 0, sizeof(int)*4);
  while (scanf("%d,%s\n", &n, bt) == 2) {
    for (int i=0; i<4; i++) {
      if (!strcmp(bt, label[i])) {
        ++c[i];
        break;
      }
    }
  }
  for (int i=0; i<4; i++) {
    printf("%d\n", c[i]);
  }
  return 0;
}