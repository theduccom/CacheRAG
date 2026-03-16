#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)

int H,W;
char field[110][110];
map<char,int> dx;
map<char,int> dy;

void make(){
  dx['^'] = 0;  dy['^'] = -1;
  dx['v'] = 0;  dy['v'] = 1;
  dx['>'] = 1;  dy['>'] = 0;
  dx['<'] = -1; dy['<'] = 0;
}

pair<int,int> func(int i, int j){
  if(field[i][j] == '.') return make_pair(i,j);
  int cnt = 0;

  while(1){
    if(i < 0 || j < 0 || i >= H || j >= W) continue;
    cnt++;
    i += dy[field[i][j]];
    j += dx[field[i][j]];
    if(field[i][j] == '.') return make_pair(i,j);
    if(cnt > 10000) break;
  }

  return make_pair(-1,-1);
}

int main(){
  int i,j,k;

  make();
  for(; ~scanf("%d %d",&H,&W); ){
    if(H == 0 && W == 0) break;

    rep(i,H) scanf("%s",&field[i]);

    pair<int,int> res = func(0,0), out(-1,-1);
    if(res == out) puts("LOOP");
    else printf("%d %d\n",res.second,res.first);
  }

  return 0;
}