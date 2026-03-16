#include <cstdio>
using namespace std;

int main() {
  int x, y, mapx, mapy, tmp0, tmp1, flag;
  char map[101][101], pmap;
  scanf("%d%d",&mapx,&mapy);
  while (mapx+mapy) {
    for (tmp0 = 0;tmp0 < mapx;tmp0++) scanf("%s", map[tmp0]);
    x = 0, y = 0, flag = 1;
    while (flag && flag != 100) {
      pmap = map[x][y];
      map[x][y] = 1;
      if (pmap == '>') y++;
      else if (pmap == '<') y--;
      else if (pmap == '^') x--;
      else if (pmap == 'v') x++;
      else if (pmap == '.') flag = 0;
      else flag = 100;
    }
    if (flag) puts("LOOP");
    else printf("%d %d\n", y, x);
    scanf("%d%d", &mapx,&mapy);
  }
  return 0;
}