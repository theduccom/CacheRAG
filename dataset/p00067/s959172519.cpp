#include <iostream>
using namespace std;

char island[12][13];

int dfs(int i, int j){
  if(island[i][j] == '0' || i > 12 || j > 12)return 0;
  
  island[i][j] = '0';
  dfs(i + 1, j);
  if(j < 11)dfs(i, j + 1);
  if(j > 0)dfs(i, j - 1);
  return 1;
}

int solve(){
  int cnt = 0;
  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      if(island[i][j] == '1'){
        cnt++;
        dfs(i, j);
      }
    }
  }
  return cnt;
}

int main(){
  while(cin >> island[0]){
    for(int i = 1; i < 12; i++){
      cin >> island[i];
    }
    cout << solve() << endl;
  }
}