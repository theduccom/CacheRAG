#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int MAXH = 101;
const int MAXW = MAXH;

int H, W;
char g[MAXH][MAXW];

int main() {
  while(cin >> H >> W && (H|W)) {
    for(int i = 0; i < H; ++i) {
      for(int j = 0; j < W; ++j) {
        cin >> g[i][j];
      }
    }
    int x, y;
    x = y = 0;
    while(1) {
      char c = g[y][x];
      g[y][x] = '#';
      if(c == '>') ++x;
      if(c == '<') --x;
      if(c == '^') --y;
      if(c == 'v') ++y;
      if(c == '.') {
        cout << x << " " << y << endl;
        break;
      }
      if(c == '#') {
        cout << "LOOP" << endl;
        break;
      }
    }
  }
  return 0;
}