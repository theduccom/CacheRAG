#include <iostream>
#include <vector>
using namespace std;

void solve(vector<vector<int> > &v,int x,int y,int c,int w,int h){
  if(x<1||y<1||w<x||h<y)return;
  if(v[y][x]!=c)return;
  v[y][x]=6;
  solve(v,x+1,y,c,w,h);
  solve(v,x-1,y,c,w,h);
  solve(v,x,y-1,c,w,h);
  solve(v,x,y+1,c,w,h);
}

int main(void){
  int w,h;
  while(cin>>w>>h,w||h){
    int xs,ys,xg,yg,n;
    vector<vector<int> > field(101);
    for(int i=0;i<101;++i)field[i].resize(101);
    cin>>xs>>ys>>xg>>yg>>n;
    for(int i=0,c,d,x,y;i<n;++i){
      cin>>c>>d>>x>>y;
      if(d){
        for(int j=y;j<y+4;++j)
          for(int k=x;k<x+2;++k)
            field[j][k]=c;
      }else{
        for(int j=y;j<y+2;++j)
          for(int k=x;k<x+4;++k)
            field[j][k]=c;
      }
    }
    solve(field,xs,ys,field[ys][xs],w,h);
    //for(int i=1;i<=h;++i){for(int j=1;j<=w;++j) cerr<<field[i][j]<<" ";cerr<<endl;}
    cout<<((field[yg][xg]==6)?"OK":"NG")<<endl;
  }
  return 0;
}