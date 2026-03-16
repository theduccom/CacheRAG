#include <iostream>
#include <string>
using namespace std;
string a[8];

void dfs(int x,int y){

  int i;

  a[y][x]='0';
  for(i=-3;i<=3;i++) if(x+i>=0 && x+i<8) if(a[y][x+i]=='1') dfs(x+i,y);
  for(i=-3;i<=3;i++) if(y+i>=0 && y+i<8) if(a[y+i][x]=='1') dfs(x,y+i);

}

int main(){

  int x,y,n,i;

  cin>>n;

  for(int j=0;j<n;j++){
    for(i=0;i<8;i++) cin>>a[i];
    cin>>x>>y;

    dfs(x-1,y-1);
    cout<<"Data "<<j+1<<":"<<endl;
    for(i=0;i<8;i++) cout<<a[i]<<endl;
  }

    return 0;

}