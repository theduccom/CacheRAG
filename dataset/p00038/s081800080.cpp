#include <stdio.h>

int main(void) {
  int i, j, k, c[5], t;
  while(scanf("%d", &c[0]) != EOF) {
    for(i = 1; i < 5; ++i) scanf(",%d", &c[i]);
    for(i = 0; i < 5; ++i) if(c[i] == 1) c[i] = 14;
    for(i = 0; i < 5; ++i) for(j = i + 1; j < 5; ++j) if(c[i] > c[j]) t = c[i], c[i] = c[j], c[j] = t;
    if((c[0] == c[1] && c[1] == c[2] && c[2] == c[3]) || (c[3] == c[4] && c[1] == c[2] && c[2] == c[3])) printf("four card\n");
    else if((c[0] == c[1] && c[1] == c[2] && c[3] == c[4]) || (c[0] == c[1] && c[2] == c[3] && c[3] == c[4])) printf("full house\n");
    else if((c[4] == c[3] + 1 || (c[4] == 14 && c[3] == 5)) && c[3] == c[2] + 1 && c[2] == c[1] + 1 && c[1] == c[0] + 1) printf("straight\n");
    else if((c[0] == c[1] && c[1] == c[2]) || (c[2] == c[3] && c[1] == c[2]) || (c[2] == c[3] && c[3] == c[4])) printf("three card\n");
    else if((c[0] == c[1] && c[2] == c[3]) || (c[0] == c[1] && c[3] == c[4]) || (c[1] == c[2] && c[3] == c[4])) printf("two pair\n");
    else if(c[0] == c[1] || c[1] == c[2] || c[2] == c[3] || c[3] == c[4]) printf("one pair\n");
    else printf("null\n");
  }
  return 0;
}
