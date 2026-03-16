#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <fstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> P;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
bool ariv[101][101];
P end(vector<string> grid,int x, int y){
  if(ariv[y][x]) return P(-1,-1);
  else ariv[y][x] = true;
  if(grid[y][x]=='.') return P(x,y);
  if(grid[y][x]=='>') return end(grid,x+1,y);
  if(grid[y][x]=='<') return end(grid,x-1,y);
  if(grid[y][x]=='^') return end(grid,x,y-1);
  if(grid[y][x]=='v') return end(grid,x,y+1);
}
void outp(vector<string> grid,int x,int y){
 P point = end(grid,x,y);
 if(point.first==-1) cout<<"LOOP"<<endl;
 else printf("%d %d\n",point.first,point.second);
}
int main(void){
  int H,W;
  while(cin>>H>>W){
    if(H==0) break;
    vector<string> grid;
    memset(ariv,0,sizeof(ariv));
    REP(y,H){
      string tmp;
      cin>>tmp;
      grid.push_back(tmp);
    }
    if(grid[0][0]=='.') printf("0 0\n");
    else if(grid[0][0]=='>')outp(grid,1,0);
    else if(grid[0][0]=='<')outp(grid,0,0);
    else if(grid[0][0]=='^')outp(grid,0,0);
    else if(grid[0][0]=='v')outp(grid,0,1);
  }
  return 0;
}