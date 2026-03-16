#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i, n) REP(i, 0, n)

//4方向ベクトル→↑←↓
int dx[] ={1,0,-1,0};
int dy[] ={0,-1,0,1};
//ブロック2×4 
int w,h;//ボードの横,縦
int xs,ys;//スタートの座標
int xg,yg;//ゴールの座標
int n;//ブロックの個数
int c,d;//ブロックの色,ブロックの向き,ブロックの位置x,y

int board[102][102];

bool dfs(int x,int y,int color){
  if(color ==0 ||board[x][y] !=color)
    return false;
  if(x ==xg&&y ==yg)
    return true;
  board[x][y] = 0;
  for(int i = 0 ;i < 4;i++){
    if(x +dx[i] <=0 || x+dx[i]>w || y+dy[i] <=0 ||y +dy[i] >h)
      continue;
    if(dfs(x+dx[i],y+dy[i],color))
      return true;
  }
  return false;
}

int main(){
  while(scanf("%d %d",&w,&h)){
    if(w==0&&h==0)
      break;
    cin>>xs>>ys>>xg>>yg>>n;
    for(int i = 0;i < n;i++){
      int x,y;
      cin >>c>>d>>x>>y;
      int W,H;
      if(d ==0){
	W =4;
	H =2;
      }else{
	W = 2;
	H = 4;
      }
      for(int i = 0;i < H;i++){
	for(int j = 0;j < W;j++){
	  board[j+x][i+y] =c;
	}
      }
  }
    cout<<((dfs(xs,ys,board[xs][ys]))?"OK":"NG")<<endl;
  }
  return 0;
}