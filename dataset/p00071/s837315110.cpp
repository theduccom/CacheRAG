#include <cstdio>
#include <queue>
#include <utility>
using namespace std;

typedef pair<int, int> Pair;

int n;
int field[100][100];
queue<Pair> q;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

bool WithinRange(int y, int x) {
  if (y < 0) return false;
  if (x < 0) return false;
  if (y >= 8) return false;
  if (x >= 8) return false;
  return true;
}

void ProcessBomb(Pair p) {
  int y = p.first;
  int x = p.second;
  
  for (int i=0; i<4; i++) {
    for (int j=0; j<4; j++) {
      int newy = y + dy[i] * j;
      int newx = x + dx[i] * j;

      if (WithinRange(newy, newx) && field[newy][newx]) {
        q.push(Pair(newy, newx));
        field[newy][newx] = 0;
      }
    }
  }
}

int main() {
  scanf("%d", &n);

  for (int Case=1; Case<=n; Case++) {
    for (int i=0; i<8; i++) {
      for (int j=0; j<8; j++) {
        scanf("%1d", &field[i][j]);
      }
    }
  
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    --y;
    --x;
    q.push(Pair(y, x));
    while (!q.empty()) {
      Pair p = q.front(); q.pop();
      ProcessBomb(p);
    }

    printf("Data %d:\n", Case);
    for (int i=0; i<8; i++) {
      for (int j=0; j<8; j++) {
        printf("%d", field[i][j]);
      }
      puts("");
    }
  }
}