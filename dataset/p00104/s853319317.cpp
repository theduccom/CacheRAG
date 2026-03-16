#include <cstdio>
using namespace std;

int x;
int y;
int h;
int w;
bool loop;
char symbols[] = "<^>v";
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
char field[1000][1000];
bool used[1000][1000];

int main() {
  while (1) {
    scanf("%d%d", &h, &w);
    if (w == 0 && h == 0) return 0;
    
    for (int i=0; i<h; i++) {
      for (int j=0; j<w; j++) {
        scanf(" %c", &field[i][j]);
        used[i][j] = false;
      }
    }

    x = 0;
    y = 0;
    loop = false;
    while (1) {
      if (field[y][x] == '.') break;
      if (used[y][x]) {
        loop = true;
        break;
      }
      used[y][x] = true;

      for (int i=0; i<4; i++) {
        if (field[y][x] == symbols[i]) {
          y += dy[i];
          x += dx[i];
          break;
        }
      }
    }

    if (!loop) printf("%d %d\n", x, y);
    else puts("LOOP");
  }
}