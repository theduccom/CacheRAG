#include <iostream>
#include <cstdio>
using namespace std;
int field[10][10] = {0};

void dfs1(int x, int y) {
  field[y][x] += 1;
  for(int dx = -1 ; dx <= 1 ; dx++) {
    int nx = x + dx;
    if(0 <= nx && nx < 10 && nx != x) field[y][nx] += 1;
  }
  for(int dy = -1 ; dy <= 1 ; dy++) {
    int ny = y + dy;
    if(0 <= ny && ny < 10 && ny != y) field[ny][x] += 1;
  }
}

void dfs2(int x, int y) {
  for(int dx = -1 ; dx <= 1 ; dx++) {
    for(int dy = -1 ; dy <= 1 ; dy++) {
      int nx = x + dx, ny = y + dy;
      if(0 <= nx && nx < 10 && 0 <= ny && ny < 10) field[ny][nx] += 1;
    }
  }
}

void dfs3(int x, int y) {
  if(y+2 < 10) field[y+2][x] += 1;
  if(y-2 >= 0) field[y-2][x] += 1;
  if(x+2 < 10) field[y][x+2] += 1;
  if(x-2 >= 0) field[y][x-2] += 1;
  for(int dx = -1 ; dx <= 1 ; dx++) {
    for(int dy = -1 ; dy <= 1 ; dy++) {
      int nx = x + dx, ny = y + dy;
      if(0 <= nx && nx < 10 && 0 <= ny && ny < 10) field[ny][nx] += 1;
    }
  }
}

int main(void) {
  int x, y, size;
  char c1, c2;
  int max=0;
  int white=0;
  while(cin >> x >> c1  >> y >> c2 >> size) {
    if(size == 1) dfs1(x, y);
    if(size == 2) dfs2(x, y);
    if(size == 3) dfs3(x, y);
  }
  /*for(int i = 0 ; i < 10 ; i++) {
    for(int j = 0 ; j < 10 ; j++) {
      cout << field[i][j] << ' ';
    }
    cout << endl;
    }*/
  for(int i = 0 ; i < 10 ; i++) {
    for(int j = 0 ; j < 10 ; j++) {
      if(field[i][j] > max) max = field[i][j];
      if(field[i][j] == 0) white++;
    }
  }
  cout << white << endl;
  cout << max << endl;
  return 0;
}