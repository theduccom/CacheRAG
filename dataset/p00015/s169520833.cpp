#include <cstdio>
#include <cstring>
using namespace std;

int main() {
  int n;
  char f[110], s[110];
  scanf("%d", &n);
  while (n--) {
    scanf("%s%s", f, s);
    int fp = strlen(f);
    int sp = strlen(s);
    if (fp > 80 || sp > 80) {
      puts("overflow");
      continue;
    }
    int c = 0, p = 0, ans[90];
    while (fp > 0 || sp > 0) {
      int a = 0, b = 0;
      if (fp > 0) a = f[--fp] - '0';
      if (sp > 0) b = s[--sp] - '0';
      ans[p++] = (a + b + c) % 10;
      c = (a + b + c) / 10;
    }
    if (c) ans[p] = c;
    else --p;
    if (p >= 80) {
      puts("overflow");
      continue;
    }
    for (; p >= 0; --p) {
      printf("%d", ans[p]);
    }
    puts("");
  }
}
