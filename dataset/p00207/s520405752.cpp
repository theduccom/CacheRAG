#include <iostream>
using namespace std;
   
int F[102][102];
int xg,yg,w,h;
   
   
void DFS(int Y,int X,int c){
  //if(Y < 1 || X < 1)
    //return;
  if(F[Y][X] != c){
    return;
  }
   
  F[Y][X] = -1;
  DFS(Y+1,X  ,c);
  DFS(Y-1  ,X,c);
  DFS(Y,X+1  ,c);
  DFS(Y  ,X-1,c);
}
   
   
int main(){
  int xs,ys,n;
  while(1){
    cin >> w >> h;
    if(w == 0 && h == 0)
      break;
for(int i=0; i<102; i++){
      for(int j=0; j<102; j++){
        F[i][j] = 10;
      }
    }
       F[0][-100] = 0;
    cin >> xs >> ys >> xg >> yg >> n;
   
   
    for(int i=0;i<n;i++){
      int c,d,x,y;
      cin >> c >> d >> x >> y;
      if(c == 0)
         c = 1919810;
      if(d == 0){
        for(int j=0;j<4;j++){
          F[x+j][y] = c;
          F[x+j][y+1] = c;
        }
      } else {
        for(int j=0;j<4;j++){
          F[x][y+j] = c;
          F[x+1][y+j] = c;
        }
      }
    }
  DFS(xs,ys,F[xs][ys]);
   
  if(F[xg][yg] == -1){
    cout << "OK" << endl;
  } else {
    cout << "NG" <<endl;
  }
  }
}
