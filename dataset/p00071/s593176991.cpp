#include <iostream>
using namespace std;
char map[8][8];
void init(){
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      map[i][j] = '0';
    }
  }
}
void dfs(int a, int b){
  map[a][b] = '0';
  for(int i = -3; i <= 3; i++){
    if(a + i >= 0 && a + i < 8 && map[a+i][b] == '1') dfs(a+i, b);
    if(b + i >= 0 && b + i < 8 && map[a][b+i] == '1') dfs(a, b+i);
  }
}
void print_map(){
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      cout << map[i][j];
    }
    cout << endl;
  }
}
int main(void){
  int n, a, b;
  cin >> n;
  for(int i = 0; i < n; i++){
    init();
    for(int j = 0; j < 8; j++){
      for(int k = 0; k < 8; k++){
        cin >> map[j][k];
      }
    }
    cin >> a >> b;
    cout << "Data " << i + 1 << ":" << endl;
    dfs(b - 1, a - 1);
    print_map();
  }
  return 0;
}