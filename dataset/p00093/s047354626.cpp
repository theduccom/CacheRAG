#include <cstdio>
using namespace std;

int a, b;
bool is_first = true;

int main() {
  while (1) {
    scanf("%d%d", &a, &b);
    if (a == 0 && b == 0) return 0;
    if (!is_first) puts("");
    is_first = false;

    bool found = false;
    for (int i=a; i<=b; i++) {
      if (i%400 == 0) {
        printf("%d\n", i);
        found = true;
      } else if (i%100 == 0);
      else if (i%4 == 0) {
        printf("%d\n", i);
        found = true;
      }
    }

    if (!found) puts("NA");
  }
}