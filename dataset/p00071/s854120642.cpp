#include <iostream>
using namespace std;

const int W = 8;

char t[W + 2][W + 2];

void dfs(int x, int y){
  if(x < 0 || W <= x || y < 0 || W <= y) return;
  if(t[y][x] == '0') return;
  t[y][x] = '0';

  for(int i = -3; i <= 3; i++){
    dfs(x, y + i);
    dfs(x + i, y);
  }
}

int main(){
  int T;
  cin >> T;

  for(int DATA = 1; DATA <= T; DATA++){
    cout << "Data " << DATA << ":" << endl;
    for(int i = 0; i < W; i++){
      cin >> t[i];
    }

    int sx, sy;
    cin >> sx >> sy;
    dfs(sx - 1, sy - 1);

    for(int i = 0; i < W; i++){
      cout << t[i] << endl;
    }
  }
}