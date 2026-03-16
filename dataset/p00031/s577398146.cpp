#include <iostream>
using namespace std;

bool used[10], ans[10], endR;
int bundo[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void init(){ for(int i = 0; i < 10; i++) used[i] = false; endR = false;}

void copyAns(){
  for(int i = 0; i < 10; i++) ans[i] = used[i];
}

void dfs(int i, int w){
  if(w == 0) { copyAns(); endR = true; return; }
  if(i == 10 || w < 0 || endR) return;

  if(!used[i]){
    used[i] = true;
    dfs(i + 1, w - bundo[i]);
  }
  used[i] = false;
  dfs(i + 1, w);
}

int main(void){
  int w;
  while(cin >> w){
    init();
    dfs(0, w);
    int cnt = 0;
    for(int i = 0; i < 10; i++){
      if(ans[i]) cnt++;
    }
    for(int i = 0; i < 10; i++){
      if(ans[i]) cout << bundo[i];
      if(ans[i] && --cnt) cout << " ";
    }
    cout << endl;
  }
  return 0;
}