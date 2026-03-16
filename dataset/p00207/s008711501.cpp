#include<iostream>
#include<utility>
#include<queue>
using namespace std;

typedef pair<int,int> P;

int main(){
  int w,h;
  int xs,ys,xg,yg;
  int n;
  int c,d,x,y;
  int grid[101][101];
  bool visit[101][101];

  for(;;){
    cin >> w >> h;
    if(!w && !h)break;

    for(int i=1;i<=h;i++)
      for(int j=1;j<=w;j++){
	grid[i][j] = 0;
	visit[i][j] = false;
      }
    cin >> xs >> ys >> xg >> yg;

    cin >> n;
    for(int i=0;i<n;i++){
      cin >> c >> d >> x >> y;
      if(d){
	for(int j=0;j<4;j++)
	  for(int k=0;k<2;k++)grid[y+j][x+k] = c;
      }else{
	for(int j=0;j<2;j++)
	  for(int k=0;k<4;k++)grid[y+j][x+k] = c;
      }
    }

    int color = grid[ys][xs];    
    queue<P> q;
    if(color){
      q.push(P(ys,xs));
      visit[ys][xs] = true;
      while(q.size()){
	P p = q.front();q.pop();
	y = p.first;
	x = p.second;
	
	int dx[] = {0,1,0,-1},dy[] = {-1,0,1,0};
	for(int i=0;i<4;i++){
	  int sx = x+dx[i],sy = y+dy[i];
	  if(sx<=0 || sy<=0 || w<sx || h<sy)continue;
	  if(visit[sy][sx] || grid[sy][sx]!=color)continue;
	  q.push(P(sy,sx));
	  visit[sy][sx] = true;
	}
      }
      if(visit[yg][xg])cout << "OK\n";
      else cout << "NG\n";
    }else{
      cout << "NG\n";
    }
  }
}