#include <cstdio>
#include <cstring>
using namespace std;

int n;
char buf[1000];

int main() {
  while (1) {
    if (scanf("%s", buf) != 1) break;

    n = strlen(buf);
    int total = 0;
    int cur_num = 0;
    int prev_num = 0;
    for (int i=0; i<n; i++) {
      switch (buf[i]) {
      case 'I':
        cur_num = 1;
        break;
      case 'V':
        cur_num = 5;
        break;
      case 'X':
        cur_num = 10;
        break;
      case 'L':
        cur_num = 50;
        break;
      case 'C':
        cur_num = 100;
        break;
      case 'D':
        cur_num = 500;
        break;
      case 'M':
        cur_num = 1000;
      }

      if (prev_num >= cur_num) total += cur_num;
      else total += cur_num - prev_num*2;
      prev_num = cur_num;
    }

    printf("%d\n", total);
  }
}