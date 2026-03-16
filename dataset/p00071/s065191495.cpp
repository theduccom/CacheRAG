#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int MAX = 9;

char field[MAX][MAX];

void dfs(int x, int y) {
  field[y][x] = '0';
  //cout << x << ' ' << y << endl;

  for(int dy = -3 ; dy <= 3 ; dy++) {
    int ny = y + dy;
    if(1 <= ny && ny < MAX && field[ny][x] == '1') dfs(x, ny);
  }
  for(int dx = -3 ; dx <= 3 ; dx++) {
    int nx = x + dx;
    if(1 <= nx && nx < MAX && field[y][nx] == '1') dfs(nx, y);
  }
}

int main(void) {
  int N;
  int x, y;
  cin >> N;
  for(int d = 0 ; d < N ; d++) {
    for(int i = 1 ; i < MAX ; i++)
      for(int j = 1 ; j < MAX ; j++) cin >> field[i][j];
    cin >> x >> y;
    //printf("field[i][j], i = %d, j = %d\n", x, y);
    //cout << field[x][y] << endl;
    dfs(x, y);
   
    printf("Data %d:\n", d+1);
    for(int i = 1 ; i < MAX ; i++) {
      for(int j = 1 ; j < MAX ; j++) { 
	cout << field[i][j];
      }
      cout << endl;
    }
  }
  return 0;
}