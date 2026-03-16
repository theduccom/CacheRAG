#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;
// 5 9 13
int dx[13] = {0,1,0,-1,0,1,1,-1,-1,2,0,-2,0};
int dy[13] = {0,0,1,0,-1,1,-1,1,-1,0,2,0,-2};

bool inside(int x, int y) {
  return x >= 0 && x < 10 && y >= 0 && y < 10;
}

int main() {
  // ifstream cin("../test.txt");
  int p[10][10];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      p[i][j] = 0;
    }
  }
  int x,y,size;
  char g,h;
  while (cin >> x >> g >> y >> h >> size) {
    int m = size * 4 + 1;
    for (int i = 0; i < m; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (inside(nx, ny))
        p[nx][ny]++;
    }
  }

  int cnt = 0;
  int deepest = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (!p[i][j]) cnt++;
      deepest = max(deepest, p[i][j]);
    }
  }

  cout << cnt << endl << deepest << endl;
}