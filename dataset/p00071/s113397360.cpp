//31
#include<iostream>

using namespace std;

char g[8][9];

void bomb(int y,int x){
  if(0<=y&&y<8&&0<=x&&x<8&&g[y][x]=='1'){
    g[y][x]='0';
    int dy[]={0,1,0,-1};
    int dx[]={1,0,-1,0};
    for(int i=0;i<4;i++){
      for(int j=1;j<=3;j++){
	bomb(y+dy[i]*j,x+dx[i]*j);
      }
    }
  }
}

int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=0;j<8;j++){
      cin>>g[j];
    }
    int x,y;
    cin>>x>>y;
    bomb(y-1,x-1);
    cout<<"Data "<<i<<':'<<endl;
    for(int j=0;j<8;j++){
      cout<<g[j]<<endl;
    }
  }
  return 0;
}