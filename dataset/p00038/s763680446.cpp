#include <cstdio>
#include <cstring>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
  int a[5];
  int b[5];
  bool s;
  int x, y;
  while (scanf("%d,%d,%d,%d,%d", &a[0], &a[1], &a[2], &a[3], &a[4]) == 5) {
    sort(a, a+5);
    memset(b, 0, sizeof(int)*5);
    x = y = -1;
    for (int i=0; i<5; i++) {
      if (a[i] != x) {
        x = a[i];
        ++y;
      }
      ++b[y];
    }
    sort(b, b+5, greater<int>());
    s = true;
    for (int i=0; i<4; i++) {
      if (a[i]+1 != a[i+1]) {
        s = false;
        break;
      }
    }
    if (a[0]==1 && a[1]==10 && a[2]==11 && a[3]==12 && a[4]==13) s = true;  // exception
    if (b[0] == 4) {
      printf("four card\n");
    } else if (b[0] == 3 && b[1] == 2) {
      printf("full house\n");
    } else if (s) {
      printf("straight\n");
    } else if (b[0] == 3) {
      printf("three card\n");
    } else if (b[0] == 2 && b[1] == 2) {
      printf("two pair\n");
    } else if (b[0] == 2) {
      printf("one pair\n");
    } else {
      printf("null\n");
    }
  }

  return 0;
}