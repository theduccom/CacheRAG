#include <iostream>

using namespace std;

const int YOKO = 0;
const int TATE = 1;
const int BLOCK_WIDTH = 4;
const int BLOCK_HEIGHT = 2;

int map[101][101];
int pmap[101][101];
int w, h;
int xs, ys, xg, yg;
bool answer = false;

void init() {
  answer = false;
  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      map[i][j] = 0;
      pmap[i][j] = 0;
    }
  }
}

void set_block(int c, int d, int x, int y) {
  int height, width;
  if (d == YOKO) {
    height = BLOCK_HEIGHT;
    width = BLOCK_WIDTH;
  } else {
    height = BLOCK_WIDTH;
    width = BLOCK_HEIGHT;
  }
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      map[y + i][x + j] = c;
    }
  }
}

void find(int c, int x, int y) {
  if (c == map[y][x]) {
    pmap[y][x] = 1;
  }
  if (pmap[yg][xg]) {
    answer = true;
    return;
  }
  if (x - 1 > 0 && c == map[y][x - 1] && !pmap[y][x - 1]) {
    find(c, x - 1, y);
  }
  if (x + 1 < 101 && c == map[y][x + 1] && !pmap[y][x + 1]) {
    find(c, x + 1, y);
  }
  if (y - 1 > 0 && c == map[y - 1][x] && !pmap[y - 1][x]) {
    find(c, x, y - 1);
  }
  if (y + 1 < 101 && c == map[y + 1][x] && !pmap[y + 1][x]) {
    find(c, x, y + 1);
  }
}

int main() {
  int n, c, d, x, y;
  while(cin >> w >> h, w) {
    cin >> xs >> ys;
    cin >> xg >> yg;
    cin >> n;
    init();
    for (int i = 0; i < n; i++) {
      cin >> c >> d >> x >> y;
      set_block(c, d, x, y);
    }
    find(map[ys][xs], xs, ys);
    cout << ((answer) ? "OK" : "NG") << endl;
  }
  return 0;
}