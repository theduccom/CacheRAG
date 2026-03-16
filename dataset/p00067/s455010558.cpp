#include <bits/stdc++.h>

using namespace std;

string field[12];

void dfs(int i, int j){
  int dx[4] = {-1, 0, 0, 1};
  int dy[4] = {0, 1, -1, 0};
  if(field[i][j] != '1'){
    return;
  }else{
    field[i][j] = '*';
    for(int m = 0;m < 4;m++){
      int x = i+dx[m], y = j + dy[m];
      if(0 <= x && x < 12 && 0 <= y && y < 12){
        dfs(x, y);
      }
    }
    return;
  }
  return;
}

int solve(){
  int cnt = 0;
  for(int i = 0;i < 12;i++){
    for(int j = 0;j < 12;j++){
      if(field[i][j] == '1'){
        cnt++;
        dfs(i, j);
      }
    }
  }
  return cnt;
}

int main(void){
  while(cin >> field[0] && field[0].size()){
    for(int i = 1;i < 12;i++){
      cin >> field[i];
    }
    cout << solve() << endl;
  }
  return 0;
}