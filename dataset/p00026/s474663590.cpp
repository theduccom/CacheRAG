#include <cstdio>
#include <algorithm>
using namespace std;
int p[10][10];
int dx[] = { 0, 0, -1, 1, -1, -1, 1, 1, 0, 0, -2, 2 };
int dy[] = { -1, 1, 0, 0, -1, 1, -1, 1, -2, 2, 0, 0 };
int main() {
  int x, y, s;
  while (~scanf("%d,%d,%d", &x, &y, &s)) {
    p[y][x]++;
    for (int i = 0; i < s * 4; ++i) {
      int px = x + dx[i];
      int py = y + dy[i];
      if (px >= 0 && px < 10 && py >= 0 && py < 10) {
        p[py][px]++;
      }
    }
  }
  int dv = 0, mv = 0;
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      if (p[j][i] == 0) dv++;
      mv = max(p[j][i], mv);
    }
  }
  printf("%d\n%d\n", dv, mv);
}
