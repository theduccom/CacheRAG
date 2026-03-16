#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

bool dfs(int x,int y,int color);
int w,h;
int xs,ys;
int xg,yg;
int board[111][111];
int cheak[111][111];
int xd[]={0,-1,0,1};
int yd[]={-1,0,1,0};
int main(){
  int n;
  int c,d,x,y;
  int a[]={1,0,1,0,1,0,1};
  int b[]={0,1,1,2,2,3,3};
  while(1){
    cin >> w >> h;
    if(w==0 && h==0) break;
    memset(board,0,sizeof(board));
    memset(cheak,0,sizeof(cheak));
    cin >> xs >> ys;
    cin >> xg >> yg;
    cin >> n;
    xs--,ys--,xg--,yg--;
    for(int i=0;i<n;i++){
      cin >> c >> d >> x >> y;
      x--,y--;
      board[y][x]=c;
      for(int j=0;j<7;j++){
	if(d==0) board[y+a[j]][x+b[j]]=c;
	else board[y+b[j]][x+a[j]]=c;
      }
    }
    if(board[ys][xs]!=0){
      if(dfs(xs,ys,board[ys][xs])==true) cout << "OK" << endl;
      else cout << "NG" << endl;
    }
    else cout << "NG" << endl;
  }
}

bool dfs(int x,int y,int color){
  board[y][x]=0;
  if(x==xg && y==yg) return true;
  for(int i=0;i<4;i++){
    int xn=x+xd[i];
    int yn=y+yd[i];
    if(xn>=0 && xn<w && yn>=0 && yn<h && board[yn][xn]==color && board[yn][xn]!=0){
      if(dfs(xn,yn,board[yn][xn])==true) return true;
    }
  }
  return false;
}