#define _GLIBCXX_DEBUG

#include <bits/stdc++.h>


using namespace std;


int f[12][12];

void dfs(int y, int x) {
  if (y < 0 || y > 11) {
    return;
  }
  if (x < 0 || x > 11) {
    return;
  }
  if (!f[y][x]) {
    return;
  }
  if (f[y][x]) {
    f[y][x] = 0;
  }

  int dy[] = { -1, 0, 1, 0 };
  int dx[] = { 0, 1, 0, -1 };

  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    dfs(ny, nx);
  }
}

int main() {
  while (true) {
    for (int i = 0; i < 12; i++) {
      string str;
      if (!(cin >> str)) {
        exit(EXIT_SUCCESS);        
      }
      for (int j = 0; j < 12; j++) {
        f[i][j] = str[j] - '0';
      }
    }
    int ans = 0;
    for (int i = 0; i < 12; i++) {
      for (int j = 0; j < 12; j++) {
        if (f[i][j]) {
          ans++;
          dfs(i, j);
        } 
      }
    }

    cout << ans << endl;
  }
  
  
  return 0;
}