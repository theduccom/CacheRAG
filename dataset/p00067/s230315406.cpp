#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string G[12];

void dfs(int x, int y) {
  G[y][x] = '0';
  for(int i = -1; i <= 1; i += 2) {
    for(int j = 0; j < 2; ++j) {
      int nx = x + i*j;
      int ny = y + i*(1-j);
      if(nx < 0 || nx >= 12) continue;
      if(ny < 0 || ny >= 12) continue;
      if(G[ny][nx] == '0') continue;
      dfs(nx, ny);
    }
  }
}

int solve() {
  int res = 0;
  for(int i = 0; i < 12; ++i) {
    for(int j = 0; j < 12; ++j) {
      if(G[i][j] == '1') {
	dfs(j, i);
	++res;
      }
    }
  }
  return res;
}

int main() {
  while(cin >> G[0]) {
    for(int i = 1; i < 12; ++i) cin >> G[i];
    cout << solve() << endl;
  }
  return 0;
}