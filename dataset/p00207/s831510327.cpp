#include<iostream>
using namespace std;

int F[102][102];
void DFS(int y, int x, int c){
  if(F[y][x]!=c){
    return;
  }

  F[y][x]=6;

  DFS(y, x+1, c);
  DFS(y, x-1, c);
  DFS(y+1, x, c);
  DFS(y-1, x, c);
}

int main(){
  while(1){
    for(int i=0; i<20; i++){
      for(int j=0; j<20; j++){
        F[i][j]=0;
      }
    }
    int w,h,xs,ys,xg,yg,n;
    cin >> w >> h;
    if(w==0&&h==0){
      return 0;
    }
    cin >> xs >> ys >> xg >> yg >> n;
    for(int i=0; i<n; i++){
      int a,b,x,y;
      cin >> a >> b >> x >> y;
      if(b==0){
        F[y][x]=a;
        F[y][x+1]=a;
        F[y][x+2]=a;
        F[y][x+3]=a;
        F[y+1][x]=a;
        F[y+1][x+1]=a;
        F[y+1][x+2]=a;
        F[y+1][x+3]=a;//横長
      }else{
        F[y][x]=a;
        F[y+1][x]=a;
        F[y+2][x]=a;
        F[y+3][x]=a;
        F[y][x+1]=a;
        F[y+1][x+1]=a;
        F[y+2][x+1]=a;
        F[y+3][x+1]=a;//縦長
      }
    }
    int z = F[ys][xs];
    if(z==0){
      cout << "NG" << endl;
      continue;
    }
    DFS(ys, xs , z);
    if(F[yg][xg]==6){
      cout << "OK" << endl;
    }else{
      cout << "NG" << endl;
    }
  }
}

