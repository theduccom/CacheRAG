#include <cstdio>
using namespace std;
int main() {
  char c;
  int n;
  while ((c = getchar()) != EOF) {
    if (c == '@') {
      n = getchar() - '0';
      c = getchar();
      while (n--) putchar(c);
    } else {
      putchar(c);
    }
  }
  return 0;
}