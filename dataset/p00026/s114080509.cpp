#include <iostream>
using namespace std;

void drop(int x, int y, int xy[][10]){
  if(x>=0 && x<10 && y>=0 && y<10)
    xy[x][y]++;
}

int main(){
  int xy[10][10]={{0}};
  int x,y,size,num=0,ans=0;
  const int small=5, medium=9, big=13;
  char c;

  int s[small][2]={{0,0},{-1,0},{1,0},{0,-1},{0,1}};
  int m[medium][2]={{0,0},{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1}};
  int b[big][2]={{0,0},{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1},{-2,0},{2,0},{0,-2},{0,2}};
  while(cin >> x >> c >> y >> c >> size){
    if(size==1) for(int i=0; i<small; i++) drop(x+s[i][0],y+s[i][1],xy);
    else if(size==2) for(int i=0; i<medium; i++) drop(x+m[i][0],y+m[i][1],xy);
    else for(int i=0; i<big; i++) drop(x+b[i][0],y+b[i][1],xy);
  }

  for(int i=0; i<10; i++)
    for(int j=0; j<10; j++){
      if(xy[i][j]==0) num++;
      if(xy[i][j]>ans) ans = xy[i][j];
    }

  cout << num << endl;
  cout << ans << endl;
  return 0;
}