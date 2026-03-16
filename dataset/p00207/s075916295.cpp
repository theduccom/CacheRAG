#include<iostream>

using namespace std;
int board[128][128];
bool memo[128][128];
int w, h;

void judge(int x, int y, int c){
  if(x<0 || y<0 || x>=w || y>=h)return;
  if(board[y][x]!=c)return;
  if(memo[y][x])return;
  memo[y][x] = 1;
  judge(x-1, y, c);
  judge(x+1, y, c);
  judge(x, y-1, c);
  judge(x, y+1, c);
  return;
}

int main(){
  int xs, ys, xg, yg, n, i, j, k, c, d, x, y;
  while(cin>> w >> h, w+h){
    for(i=0; i<128; i++){
      for(j=0; j<128; j++){
        board[i][j] = 0;
        memo[i][j] = 0;
      }
    }
    cin >> xs >> ys;
    cin >> xg >> yg;
    cin >> n;
    for(i=0; i<n; i++){
      cin >> c >> d >> x >> y;
      if(d==0){
        for(j=y-1; j<y+1; j++){
          for(k=x-1; k<x+3; k++){
            board[j][k] = c;
          }
        }
      }else{
        for(j=y-1; j<y+3; j++){
          for(k=x-1; k<x+1; k++){
            board[j][k] = c;
          }
        }
      }
    }
    judge(xs-1, ys-1, board[ys-1][xs-1]);
    if(memo[yg-1][xg-1]==1){
      cout << "OK" << endl;
    }else{
      cout << "NG" << endl;
    }
  }
}