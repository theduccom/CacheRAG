#include <iostream>

using namespace std;
char m[8][9];
int f(int x,int y){
  if(m[y][x]=='1'){
    m[y][x]='0';
    for(int i=-3;i<4;++i){
      if(x+i<8&&x+i>=0) f(x+i,y);
      if(y+i<8&&y+i>=0) f(x,y+i);
    }
  }
}

int main(){
  int n,x,y;
  cin>>n;
  for(int j=1;j<=n;++j){
    for(int i=0;i<8;++i) cin>>m[i];
    cin>>x>>y;--x;--y;
    f(x,y);
    cout<<"Data "<<j<<":"<<endl;
    for(int i=0;i<8;++i) cout<<m[i]<<endl;
  }
  return 0;
}