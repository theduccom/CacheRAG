#include <iostream>
#include <cstdio>
using namespace std;

int map[10][10];
int dx[] = {0, -1, 0, 1}, dy[] = {1, 0, -1, 0};

int main(void){
  int x, y, size;
  while(scanf("%d,%d,%d", &x, &y, &size) != EOF){
    if(size == 1){
      map[x][y]++;
      for(int i = 0; i < 4; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if(0 <= nx && nx < 10 && 0 <= ny && ny < 10) map[nx][ny]++;
      }
    }else if(size == 2){
      for(int i = -1 ; i <= 1; i++) for(int j = -1; j <= 1; j++){
        int nx = x + i, ny = y + j;
        if(0 <= nx && nx < 10 && 0 <= ny && ny < 10) map[nx][ny]++;
      }
    }else if(size == 3){
      for(int i = -1 ; i <= 1; i++) for(int j = -1; j <= 1; j++){
        int nx = x + i, ny = y + j;
        if(0 <= nx && nx < 10 && 0 <= ny && ny < 10) map[nx][ny]++;
      }
      if(y + 2 < 10) map[x][y + 2]++;
      if(0 <= y - 2) map[x][y - 2]++;
      if(x + 2 < 10) map[x + 2][y]++;
      if(0 <= x - 2) map[x - 2][y]++;
    }
  }  
  int cnt = 0, maxCard = 0;
  for(int i = 0; i < 10; i++) for(int j = 0; j < 10; j++){
    if(map[i][j] == 0) cnt++;
    if(map[i][j] > maxCard) maxCard = map[i][j]++;
  }
  
  cout << cnt << endl << maxCard << endl;
  return 0;
}