#include <stdio.h>

int main(void) {
  int i, j, k, p[10][10], x, y, s, ansn = 0, ansm = 0;
  for(i = 0; i < 10; ++i) for(j = 0; j < 10; ++j) p[i][j] = 0;
  int inkx[4][4] = {
   {0, 0, 0, 0},
   {1, 0, 0, -1},
   {1, 1, -1, -1},
   {2, 0, 0, -2}
  }, inky[4][4] = {
    {0, 0, 0, 0},
    {0, 1, -1, 0},
    {1, -1, 1, -1},
    {0, -2, 2, 0}
  };
  while(scanf("%d,%d,%d", &x, &y, &s) != EOF) {
    p[y][x]++;
    for(i = 1; i <= s; ++i) for(j = 0; j < 4; ++j) 
        if(x + inkx[i][j] >= 0 && y + inky[i][j] >= 0 && x + inkx[i][j] < 10 && y + inky[i][j] < 10) p[y + inky[i][j]][x + inkx[i][j]]++;
  }
  for(i = 0; i < 10; ++i) for(j = 0; j < 10; ++j) {
    if(!p[i][j]) ++ansn;
    if(p[i][j] > ansm) ansm = p[i][j];
  }
  printf("%d\n%d\n", ansn, ansm);
  return 0;
}
