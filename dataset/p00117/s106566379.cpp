#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i++)
int main(void){
  int maze[20][20];
  int maze1[20][20];
  int prv[20][20];
  int n,m;
  int a,b,c,d;
  cin>>n>>m;
  rep(i,n)rep(j,n)maze[i][j]=maze1[i][j]=10000000;
  while(m--){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    maze[--a][--b]=c;
    maze[b][a]=d;
  }
  
  
  rep(k,n)rep(i,n)rep(j,n){
    maze[i][j]=min(maze[i][j],maze[i][k]+maze[k][j]);
  }
  
  scanf("%d,%d,%d,%d",&a,&b,&c,&d);
  
  cout<<-maze[--a][--b]-maze[b][a]+c-d<<endl;
}