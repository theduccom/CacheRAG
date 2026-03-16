#include <cstdio>
using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int field[12][12];
bool used[12][12];

void dfs(int y, int x) {
  if (y < 0 || y >= 12) return;
  if (x < 0 || x >= 12) return;
  if (used[y][x]) return;
  if (!field[y][x]) return;

  used[y][x] = true;
  for (int i=0; i<4; i++) {
    int newy = y + dy[i];
    int newx = x + dx[i];
    dfs(newy, newx);
  }
}

int main() {
  while (1) {
    for (int i=0; i<12; i++) {
      for (int j=0; j<12; j++) {
        if (scanf("%1d", &field[i][j]) != 1) return 0;
        used[i][j] = false;
      }
    }

    int ans = 0;
    for (int i=0; i<12; i++) {
      for (int j=0; j<12; j++) {
        if (!used[i][j] && field[i][j]) {
          ans++;
          dfs(i, j);
        }
      }
    }

    printf("%d\n", ans);
  }
}