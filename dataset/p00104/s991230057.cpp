#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;

int main(){
  int w,h;
  while(cin>>h>>w, h+w){
    char data[h][w+3];
    bool f[h][w];
    memset(f, 0, sizeof(f));
    REP(i,h) cin>>data[i];
    int x, y;
    x = y = 0;
    while(true){
      if(f[y][x]){
        puts("LOOP");
        break;
      }
      if(data[y][x] == '.'){
        printf("%d %d\n",x,y);
        break;
      }
      f[y][x] = true;
      switch(data[y][x]){
      case '>': x++; break;
      case '<': x--; break;
      case '^': y--; break;
      case 'v': y++; break;
      default: break;
      }
    }
  }
  return 0;
}