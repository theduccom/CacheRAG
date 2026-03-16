#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
char s[101][101];
int n,m,a[100][100],c;
using namespace std;
int dfs(int y,int x){
  if(a[y][x]++)return 0;
  if(s[y][x]=='.'){cout<<x<<' '<<y<<endl;c++;}
  else if(s[y][x]=='^')dfs(y-1,x);
  else if(s[y][x]=='v')dfs(y+1,x);
  else if(s[y][x]=='>')dfs(y,x+1);
  else if(s[y][x]=='<')dfs(y,x-1);
  if(c)return 1;
  return 0;
}
int main(){
  while(cin>>n>>m,n){c=0;
    rep(i,100)rep(j,100)a[i][j]=0;
    rep(i,n)rep(j,m)cin>>s[i][j];
    if(!dfs(0,0))cout<<"LOOP"<<endl;
  }
}