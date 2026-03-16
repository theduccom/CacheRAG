#include <cstdio>
#include <cstring>

using namespace std;

int main() {
  int r = 0;
  char s[128];
  while (scanf("%s", s) == 1) {
    int n = strlen(s), c = 1;
    for (int i = 0; i < n - i - 1; i++)
      if (s[i] != s[n-i-1]) {
        c = 0;
        break;
      }
    r += c;
  }
  printf("%d\n", r);
  return 0;
}