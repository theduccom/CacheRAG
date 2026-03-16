#include <stdio.h>

int main(void) {
  char s[8][10];
  int i, j, k, l;
  int dx[7][3] = {
    {1, 1, 0},
    {0, 0, 0},
    {1, 2, 3},
    {0, -1, -1},
    {1, 1, 2},
    {0, 1, 1},
    {1, -1, 0}
  }, dy[7][3] = {
    {0, 1, 1},
    {1, 2, 3},
    {0, 0, 0},
    {1, 1, 2},
    {0, 1, 1},
    {1, 1, 2},
    {0, 1, 1}
  };
  while(scanf("%s", s[0]) != EOF) {
    for(i = 1; i < 8; ++i) scanf("%s", s[i]);
    int t = 1;
    for(i = 0; i < 8; ++i) {
      for(j = 0; j < 8; ++j) {
        if(s[i][j] == '1') {
          for(k = 0; k < 7; ++k) {
            for(l = 0; l < 3; ++l) {
              if(i + dy[k][l] < 0 || i + dy[k][l] >= 8 || j + dx[k][l] < 0 || j + dx[k][l] >= 8 || s[i + dy[k][l]][j + dx[k][l]] == '0') break;
            }
            if(l == 3) {
              printf("%c\n", 'A' + k);
              break;
            }
          }
          t = 0;
          break;
        }
      }
      if(!t) break;
    }
  }
  return 0;
}
