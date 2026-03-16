#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
  int a, b;
  bool first = true;
  while (scanf("%d %d", &a, &b), a|b) {
    if (!first) { puts(""); }
    first = false;
    if (a > b) { swap(a, b); }
    bool output = false;
    for (int i = a; i <= b; i++) {
      if (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0)) {
        output = true;
        printf("%d\n", i);
      }
    }
    if (!output) { puts("NA"); }
  }
}