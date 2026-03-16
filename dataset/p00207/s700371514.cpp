#include<bits/stdc++.h>
using namespace std;
int w,h;
int gx,gy;
int iro;
int mas[101][101];
int dy[4]={0,1,-1,0};
int dx[4]={1,0,0,-1};
int flag;
void solve(int x,int y){
  if(iro==0) return;
  if(x==gx-1 && y==gy-1){
    flag=1;
    return;
  }
  for(int i=0;i<4;i++){
    int ny=y+dy[i];
    int nx=x+dx[i];
    if(0<=ny && 0<=nx && ny<h && nx<w && mas[ny][nx]==iro){
      mas[ny][nx]=0;
      solve(nx,ny);
    }
  }
  return;
}
int main(){
  int n;
  int sx,sy;
  while(1){
    cin>>w>>h;
    if(w==0 && h==0) break;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	mas[i][j]=0;
      }
    }
    cin>>sx>>sy;
    cin>>gx>>gy;
    cin>>n;
    for(int i=0;i<n;i++){
      int c,d,x,y;
      cin>>c>>d>>x>>y;
      if(d==0){
	for(int i=0;i<2;i++){
	  for(int j=0;j<4;j++){
	    mas[y-1+i][x-1+j]=c;
	  }
	}
      }else{
	for(int i=0;i<4;i++){
	  for(int j=0;j<2;j++){
	    mas[y-1+i][x-1+j]=c;
	  }
	}
      }
    }
    //for(int i=0;i<h;i++){
    //for(int j=0;j<w;j++){
    //	cout<<mas[i][j];
    //}
    //cout<<endl;
    //}

    iro=mas[sy-1][sx-1];
    //cout<<iro<<endl;
    flag=0;
    solve(sx-1,sy-1);
    if(flag){
      cout<<"OK"<<endl;
    }else{
      cout<<"NG"<<endl;
    }
  }
}