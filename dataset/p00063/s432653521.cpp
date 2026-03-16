#include <cstdio>
#include <cstring>
using namespace std;

int ans;
char buf[10000];

int main() {
  while (1) {
    if (scanf("%s", buf) != 1) break;

    int n = strlen(buf);
    bool is_palindrome = true;
    for (int i=0; i<n/2; i++) {
      if (buf[i] != buf[n-1-i]) {
        is_palindrome = false;
        break;
      }
    }

    if (is_palindrome) ans++;
  }

  printf("%d\n", ans);
}