#include <iostream>
#include <vector>
using namespace std;

#define BLANK 0

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

bool dfs(int color, int x, int y, int gx, int gy, vector<vector<int> >& blocks){
  if(x == gx && y == gy){ return true; }
  blocks[x][y] = BLANK;
  for(int i = 0; i < 4; i++)
    if(blocks[x + dx[i]][y + dy[i]] == color)
      if(dfs(color, x + dx[i], y + dy[i], gx, gy, blocks))
        return true;
  return false;
}


int main(void){
  while(true){
    int w, h;
    cin >> w >> h;
    if(w == 0 && h == 0){ break; }

    int sx, sy, gx, gy;
    cin >> sx >> sy;
    cin >> gx >> gy;

    int n;
    cin >> n;

    vector<vector<int> > blocks(w + 2, vector<int>(h + 2, BLANK));
    for(int i = 0; i < n; i++){
      int c, d, x, y;
      cin >> c >> d >> x >> y;
      int now_w = (d == 0) ? 4 : 2;
      int now_h = (d == 0) ? 2 : 4;
      for(int j = 0; j < now_w; j++)
        for(int k = 0; k < now_h; k++)
          blocks[x + j][y + k] = c;
    }

    // ????????????
    if(blocks[sx][sy] == BLANK){
      cout << "NG" << endl;
      continue;
    }

    // ??????
    if(dfs(blocks[sx][sy], sx, sy, gx, gy, blocks)){ cout << "OK" << endl; }
    else{ cout << "NG" << endl; }
  }

  return 0;
}