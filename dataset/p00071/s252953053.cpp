#include <cstdio>
using namespace std;

bool map[8][8];

void bomb(int x, int y) {
  map[x][y] = false;
  for (int xx=x-3; xx<=x+3; xx++) {
    if (xx<0) continue;
    if (xx>=8) break;
    if (map[xx][y]) bomb(xx, y);
  }
  for (int yy=y-3; yy<=y+3; yy++) {
    if (yy<0) continue;
    if (yy>=8) break;
    if (map[x][yy]) bomb(x, yy);
  }
}

int main() {
  int nds, x, y;
  char buf[10];

  scanf("%d", &nds);
  for (int i=1; i<=nds; i++) {
    for (int j=0; j<8; j++) {
      scanf("%s", buf);
      for (int k=0; k<8; k++) {
        map[j][k] = buf[k] - '0';
      }
    }
    scanf("%d %d", &x, &y);
    --x; --y;
    bomb(y, x);
    printf("Data %d:\n", i);
    for (int j=0; j<8; j++) {
      for (int k=0; k<8; k++) {
        printf("%d", (map[j][k] ? 1 : 0));
      }
      printf("\n");
    }
  }

  return 0;
}