#include <iostream>
using namespace std;

#define REP(i,n,m) for(int i=n;i<m;i++)
#define rep(i,n) REP(i,0,n)

char t[10][10];
int w = 8;
int h = 8;

int dx[][4] = {
  {0,1,0,1},
  {0,0,0,0},
  {0,1,2,3},
  {0,-1,0,-1},
  {0,1,1,2},
  {0,0,1,1},
  {0,1,-1,0},
};
int dy[][4] = {
  {0,0,1,1},
  {0,1,2,3},
  {0,0,0,0},
  {0,1,1,2},
  {0,0,1,1},
  {0,1,1,2},
  {0,0,1,1},
};

bool check(int y,int x,int kind){
  for(int i=0;i<4;i++){
    int nx = x + dx[kind][i];
    int ny = y + dy[kind][i];
    if(nx>=0 && nx<w && ny>=0 && ny<h){
        if(t[ny][nx] != '1'){
          return false;
        }
    }
      else{
        return false;
        }
  }
    return true;
}

void solve(){
  rep(i,h){
    rep(j,w){
      rep(k,7){
        int tmp = check(i,j,k);
        if(tmp){
          cout<<(char)('A'+k)<<endl;
          return;
        }
      }
    }
  }
}

int main(){
  while(1){
    rep(i,h){
      if(!(cin>>t[i])) return 0;
    }
    solve();
  }
}