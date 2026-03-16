#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n; cin >> n;
  int G[8][8];
  for(int cnt = 1; cnt <= n; cnt++){
    int sx, sy;
    string inpt;
    for(int i=0; i < 8; i++){
      cin >> inpt;
      for(int j = 0; j < 8; j++){
        G[i][j] = inpt[j] - '0';
      }
    }
    cin >> sx >> sy;
    sy--; sx--;
    queue< pair<int, int> > q;
    q.push(make_pair(sx, sy));

    while(!q.empty()){
      int x = q.front().first;
      int y = q.front().second;
      q.pop();
      if(G[y][x] == true){
        for(int dy = -3; dy <= 3; dy++){
          int ny = y+dy; int nx = x;
          if(!(ny >= 0 && ny < 8 && nx >= 0 && nx < 8)) continue;
          if(G[ny][nx]){
            q.push(make_pair(nx, ny));
          }
        }
        for(int dx = -3; dx <= 3; dx++){
          int ny = y; int nx = x+dx;
          if(!(ny >= 0 && ny < 8 && nx >= 0 && nx < 8)) continue;
          if(G[ny][nx]){
            q.push(make_pair(nx, ny));
          }
        }
        G[y][x] = false;
      }
    }
    cout << "Data " << cnt << ":" << endl;
    for(int i=0; i < 8; i++){
      for(int j=0; j < 8; j++){
        cout << G[i][j];
      }
      cout << endl;
    }
  }
  return 0;
}