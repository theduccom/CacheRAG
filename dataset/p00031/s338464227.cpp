#include <cstdio>
using namespace std;

int n;

int main() {
  while (1) {
    if (scanf("%d", &n) != 1) return 0;

    bool first = true;
    for (int i=0; i<10; i++) {
      if (n >> i & 1) {
        if (first) printf("%d", 1 << i);
        else printf(" %d", 1 << i);
        first = false;
      }
    }
    puts("");
  }
}