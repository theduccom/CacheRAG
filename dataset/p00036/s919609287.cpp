//A Figure on Surface
#include<bits/stdc++.h>
using namespace std;

string board[8];

inline bool a(int x, int y){return (0<=x && x<8 && 0<=y && y<8);}

int p[7][3][2]={{{0,  1}, {1,  0}, {1,  1}},
                {{1,  0}, {2,  0}, {3,  0}},
                {{0,  1}, {0,  2}, {0,  3}},
                {{1, -1}, {1,  0}, {2, -1}},
                {{0,  1}, {1,  1}, {1,  2}},
                {{1,  0}, {1,  1}, {2,  1}},
                {{0,  1}, {1, -1}, {1,  0}}};

void solve(){
  for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
      if(board[i][j]=='1'){
        for(int k=0; k<7; k++){
          bool flag=true;
          for(int l=0; l<3; l++){
            if(!a(i+p[k][l][0], j+p[k][l][1]))flag=false;
          }
          if(flag){
            bool flag2=true;
            for(int l=0; l<3; l++){
              if(board[i+p[k][l][0]][j+p[k][l][1]]!='1') flag2=false;
            }
            if(flag2){
              char ans='A'+k;
              cout<<ans<<endl;
              return;
            }
            else continue;
          }
          else continue;
        }
      }
    }
  }
}

int main(){
  while(cin>>board[0]){
    for(int i=1; i<8; i++) cin>>board[i];
    solve();
  }
  return 0;
}