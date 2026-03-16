#include<bits/stdc++.h>
using namespace std;
int h,w,a[100][100];
int d1[]={0,0,1,-1},d2[]={1,-1,0,0};
void dfs(int y,int x,int c){
  a[y][x]=0;
  for(int i=0;i<4;i++){
    int yy=d2[i]+y,xx=d1[i]+x;
    if(yy>=0&&xx>=0&&xx<w&&yy<h)
      if(a[yy][xx]==c)
        dfs(yy,xx,c);
  }
}
int main(){
  while(cin>>w>>h,h){
    memset(a,0,sizeof(a));
    int sx,sy,gx,gy;
    cin>>sx>>sy>>gx>>gy;
    sx--;sy--;gx--;gy--;
    int m;
    cin>>m;
    while(m--){
      int q,w,e,r;
      cin>>q>>w>>e>>r;
      w;e--;r--;
      int dy[2][8] = {{0,0,0,0,1,1,1,1},{0,0,1,1,2,2,3,3}}, dx[2][8] = {{0,1,2,3,0,1,2,3},{0,1,0,1,0,1,0,1}};
      for(int i=0;i<8;i++)
        a[r+dy[w][i]][e+dx[w][i]]=q;
    }
    if(a[sy][sx]!=0&&a[gy][gx]==a[sy][sx]){
      dfs(sy,sx,a[sy][sx]);
      if(a[gy][gx]==0)cout<<"OK"<<endl;
      else goto L;
    }
    else{L:;
      cout<<"NG"<<endl;
    }
  }
}