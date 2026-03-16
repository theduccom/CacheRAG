#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int H, W;
  while (cin >> H >> W, H || W) {
    vector<vector<char> > tiles(H, vector<char>(W));

    for (auto i = 0; i < H; i++) {
      for (auto j = 0; j < W; j++) {
        cin >> tiles[i][j];
      }
    }

    bool flag = true;
    int nowX = 0, nowY = 0;
    int max_num = H * W + 1;
    while (flag && max_num--) {
      switch(tiles[nowY][nowX]) {
      case '>':
        nowX++;
        break;
      case '<':
        nowX--;
        break;
      case '^':
        nowY--;
        break;
      case 'v':
        nowY++;
        break;
      default:
        flag = false;
        break;
      }
    }

    if (max_num > 0) {
      cout << nowX << " " << nowY << endl;
    } else {
      cout << "LOOP" << endl;
    }
  }
  return 0;
}