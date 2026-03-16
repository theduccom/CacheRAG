#include<iostream>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
int main(void){
  int maze[2][100][100];
  int n,m;
  int a,b,c,t;
  while(cin>>m>>n,n+m){
    rep(i,n)rep(j,n)rep(k,2)maze[k][i][j]=100000;
    rep(i,m){
      cin>>a>>b>>c>>t;
      maze[0][--a][--b]=c;
      maze[1][a][b]=t;
      maze[0][b][a]=c;
      maze[1][b][a]=t;
    }
    rep(k,n)rep(i,n)rep(j,n)rep(l,2)
      maze[l][i][j]=min(maze[l][i][j],maze[l][i][k]+maze[l][k][j]);
    cin>>m;
    //cout<<endl;rep(i,n)rep(j,n)cout<<maze[1][i][j]<<(j==n-1?'\n':' ');
    
    rep(i,m){
      cin>>a>>b>>c;
      cout<<maze[c][--a][--b]<<endl;
    }
  }
}