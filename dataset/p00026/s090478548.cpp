#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int dx[] = {-1, 1,  0, 0};
int dy[] = { 0, 0, -1, 1};
int density[10][10];

bool WithinRange(int y, int x) {
  if (y < 0) return false;
  if (y >= 10) return false;
  if (x < 0) return false;
  if (x >= 10) return false;
  return true;
}

int main() {
  while (1) {
    int x, y, t;
    if (scanf("%d,%d,%d", &x, &y, &t) != 3) break;
    if (t == 1) {
      density[y][x]++;
      for (int i=0; i<4; i++) {
        int newy = y+dy[i];
        int newx = x+dx[i];
        if (WithinRange(newy, newx)) density[newy][newx]++;
      }
    } else if (t == 2) {
      for (int i=-1; i<=1; i++) {
        for (int j=-1; j<=1; j++) {
          int newy = y+i;
          int newx = x+j;
          if (WithinRange(newy, newx)) density[newy][newx]++;
        }
      }
    } else if (t == 3) {
      for (int i=-2; i<=2; i++) {
        for (int j=-2; j<=2; j++) {
          if (abs(i)+abs(j) > 2) continue;

          int newy = y+i;
          int newx = x+j;
          if (WithinRange(newy, newx)) density[newy][newx]++;
        }
      }
    }
  }

  int ans = 0;
  int mans = 0;
  for (int i=0; i<10; i++) { 
    for (int j=0; j<10; j++) {
      if (density[i][j] == 0) ans++;
      mans = max(density[i][j], mans);
    }
  }
  printf("%d\n", ans);
  printf("%d\n", mans);
}