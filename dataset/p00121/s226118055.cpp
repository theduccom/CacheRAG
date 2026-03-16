#include<iostream>
#include<cmath>
using namespace std;
#define LIMIT 35
struct Puzzle{char cont[8]; int space; };
Puzzle puzzle;
int limit,path[LIMIT],MD[8][8];
static const int dx[4] = {-1,0,1,0};
static const int dy[4] = {0,-1,0,1};
static const char direction[4] = {'d','r','u','l'};
 
int getHeuristic(){
  int sum = 0;
  for(int i=0;i<8;i++){
    if(puzzle.cont[i]=='0')continue;
    sum += MD[i][puzzle.cont[i]-'0'];
  }
  return sum;
}
 
bool isTarget(){
  for(int i=0;i<8;i++){
    if(puzzle.cont[i] != '0' + i )return false;
  }
  return true;
}
 
bool dfs(int depth,int prev){
  if(isTarget())return true;
  if(depth+getHeuristic()>limit)return false;
 
  int px,py,tx,ty;
  Puzzle tmp;
  px = puzzle.space%4;
  py = puzzle.space/4;
   
   
  for(int r=0;r<4;r++){
 
    tx=px+dx[r];
    ty=py+dy[r];
 
    if(max(prev,r)-min(prev,r)==2)continue;
    if(tx<0||ty<0||tx>=4||ty>=2)continue;
 
    tmp=puzzle;
 
    puzzle.cont[py*4+px] = puzzle.cont[ty*4+tx];
    puzzle.cont[ty*4+tx] = '0';
    puzzle.space = ty*4+tx;
 
    if(dfs(depth+1,r)){path[depth]=r;return true;}
    puzzle=tmp;
  }
  return false;
}
 
void solve(){
  for(limit=getHeuristic();limit<=LIMIT;limit+=2){
    if(dfs(0,-100)){
      cout<<limit<<endl;
      //for(int i=0;i<limit;i++)cout<<direction[path[i]];cout<<endl;
       
      return;
    }
  }
  cout<<"unsolvable"<<endl;
}
 
bool input(){
  for(int i=0;i<8;i++){
    if(cin>>puzzle.cont[i]){}else return false;
    if(puzzle.cont[i]=='0')puzzle.space = i;
  }
  return true;
}
 
int main(){
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      MD[i][j]=abs(i/4-j/4)+abs(i%4-j%4);
    }
  }
  while(input()){
    solve();
  }
  return 0;
}
