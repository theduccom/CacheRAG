#include <stdio.h>
#include <string.h>
int main() {
  int i, j, n, out, hit, score;
  char stack[50][100][10];

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    out = 0;
    for (j = 0; j < 100; j++) {
      if (out == 3)
        break;
      scanf("%s", stack[i][j]);
      if (strcmp(stack[i][j], "OUT")==0)out++;
    }
  }

  for (i = 0; i < n; i++) {
    score = 0;
    hit = 0;
    for (j = 0; j < 100; j++) {
      if (strcmp(stack[i][j], "HOMERUN")==0) {
        score++;
        score += hit;
        hit = 0;
      }
      if (strcmp(stack[i][j], "HIT")==0)
        hit++;
      if (hit == 4) {
        hit = 3;
        score++;
      }
    }
    printf("%d\n", score);
  }

  return 0;
}