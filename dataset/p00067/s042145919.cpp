#include <iostream>
#include <cstdio>
using namespace std;
const int MAX = 12;
char field[MAX][MAX];

void dfs(int x, int y) {
  field[x][y] = '0';

  for(int dx = -1 ; dx <= 1 ; dx++) {
    int nx = x + dx;
    if(0 <= nx && nx < MAX && field[nx][y] == '1') dfs(nx, y);
  }
  for(int dy = -1 ; dy <= 1 ; dy++) {
    int ny = y + dy;
    if(0 <= ny && ny < MAX && field[x][ny] == '1') dfs(x, ny);
  }
}

int main() {
  int res;
  while(1) {
    res = 0;
    for(int i = 0 ; i < MAX ; i++) {
      for(int j = 0 ; j < MAX ; j++) {
	cin >> field[i][j];
      }
    }
    if(cin.eof()) break;
    
    for(int i = 0 ; i < MAX ; i++) {
      for(int j = 0 ; j < MAX ; j++) {
	if(field[i][j] == '1') {
	  dfs(i, j);
	  res++;
	}
      }
    }
    cout << res << endl;
  }
  return 0;
}