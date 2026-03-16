//58
#include<iostream>

using namespace std;

int g[12][12];

void ff(int y,int x){
  if(g[y][x]){
    g[y][x]=0;
    int dy[]={0,1,0,-1};
    int dx[]={1,0,-1,0};
    for(int i=0;i<4;i++){
      int ny=y+dy[i];
      int nx=x+dx[i];
      if(0<=nx&&nx<12&&0<=ny&&ny<12){
	ff(ny,nx);
      }
    }
  }
}

int main(){
  for(;;){
    for(int y=0;y<12;y++){
      for(int x=0;x<12;x++){
	char c;
	if(!(cin>>c))return 0;
	g[y][x]=c=='1';
      }
    }
    int ans=0;
    for(int y=0;y<12;y++){
      for(int x=0;x<12;x++){
	if(g[y][x]){
	  ans++;
	  ff(y,x);
	}
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}