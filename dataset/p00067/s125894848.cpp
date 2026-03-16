#include <iostream>

using namespace std;

char field[13][13] = {0};

void dfs(int x, int y){
  field[x][y] = '0';

  int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};
  for(int i = 0;i < 4;i++){
      int nx = x + dx[i], ny = y + dy[i]; 
      if(nx >= 0 && nx < 12 && ny >= 0 && ny < 12 && field[nx][ny] == '1') dfs(nx, ny);
  }
}

int main(){
  int count = 0;

  while(1){
    for(int i = 0;i < 12;i++){
      for(int j = 0;j < 12;j++){
        cin >> field[i][j];
      }
    }

    if(cin.eof()) break;

    for(int i = 0;i < 12;i++){
      for(int j = 0;j < 12;j++){
        if(field[i][j] == '1'){
          count++;
          dfs(i, j);
        }
      }
    }
    cout << count << endl;
    count = 0;
  }

  return 0;
}