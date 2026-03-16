#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <assert.h>
#include <vector>
#include <queue>

using namespace std;
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
static const double EPS = 1e-9;
static const double PI = acos(-1.0);

#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, s, n) for (int i = (s); i < (int)(n); i++)
#define FOREQ(i, s, n) for (int i = (s); i <= (int)(n); i++)
#define FORIT(it, c) for (__typeof((c).begin())it = (c).begin(); it != (c).end(); it++)
#define MEMSET(v, h) memset((v), h, sizeof(v))

int w, h;
int sx, sy;
int gx, gy;
int n;
int field[120][120];

void PrintField() {
  REP(y, h + 2) {
    REP(x, w + 2) {
      printf("%d", field[y][x]);
    }
    puts("");
  }
}

int main() {
  while (scanf("%d %d", &w, &h), w|h) {
    MEMSET(field, 0);
    scanf("%d %d", &sx, &sy);
    scanf("%d %d", &gx, &gy);
    scanf("%d", &n);
    REP(i, n) {
      int c, d, sx, sy;
      scanf("%d %d %d %d", &c, &d, &sx, &sy);
      int ex = sx + 2;
      int ey = sy + 2;
      if (d == 0) { ex += 2; }
      if (d == 1) { ey += 2; }
      FOR(y, sy, ey) {
        FOR(x, sx, ex) {
          field[y][x] = c;
        }
      }
    }
    w += 3;
    int sc = field[sy][sx];
    queue<int> que;
    que.push(sy * w + sx);
    while (!que.empty()) {
      int x = que.front() % w;
      int y = que.front() / w;
      que.pop();
      if (sc == 0) { break; }
      if (x == gx && y == gy) {
        puts("OK");
        goto next;
      }
      REP(dir, 4) {
        const int dx[4] = { 1, 0, -1, 0 };
        const int dy[4] = { 0, 1, 0, -1 };
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (field[ny][nx] != sc) { continue; }
        field[ny][nx] = 9;
        que.push(ny * w + nx);
      }
    }
    puts("NG");
next:;
  }
}