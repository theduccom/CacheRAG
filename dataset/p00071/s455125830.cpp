#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
#define loop(i,a,b) for(int i = a ; i < b ; i++)
#define rep(i,a) for(int i = 0 ; i < a ; i++) 

bool maze[8][8];

bool inmaze(int x,int y){
  return (0<=x && x<8) && (0<=y && y<8);
}

int dfs(int x,int y){
  if(!inmaze(x,y))return 0;
  maze[x][y] = false;
  int cnt = 0;
  loop(i,-3,4){
    if(maze[x+i][y]){
      dfs(x+i,y);
    }
    if(maze[x][y+i]){
      dfs(x,y+i);
    }
  }
    
}
int main(void){
  int n;
  cin>>n;
  rep(k,n){
    string s;
    rep(i,8){
      cin>>s;
      rep(j,8)maze[i][j] = s[j] - '0';
    }
    int x,y;
    cin>>x>>y;
    dfs(--y,--x);
    if(k)cout<<endl;
    cout<<"Data "<<k+1<<":"<<endl;
    rep(i,8){
      if(i)cout<<endl;
      rep(j,8)cout<<maze[i][j];   
    }
  }
  cout<<endl;
}