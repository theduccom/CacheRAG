#include <cstdio>
#include <iostream>

using namespace std;

char d[101][101];
int X,Y;
bool Flag;

void solve(int x,int y){
  if(d[x][y]=='.'){
    Flag=1;
    X=x;Y=y;
    return;
  }
  if(d[x][y]==-1){
    return;
  }
  if(d[x][y]=='>'){
    d[x][y]=-1;
    solve(x,y+1);
  }
  if(d[x][y]=='<'){
    d[x][y]=-1;
    solve(x,y-1);
  }
  if(d[x][y]=='v'){
    d[x][y]=-1;
    solve(x+1,y);
  }
  if(d[x][y]=='^'){
    d[x][y]=-1;
    solve(x-1,y);
  }
  return;
}

int main(){
  int h,w;
  while(cin>>h>>w,h!=0&&w!=0){
    for(int i=0;i<h;i++){
      cin>>d[i];
    }
    Flag=0;
    solve(0,0);
    if(Flag){
      printf("%d %d\n",Y,X);
    }else{
      printf("LOOP\n");
    }
  }
  return 0;
}