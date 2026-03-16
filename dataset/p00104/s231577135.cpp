#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <limits>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <complex>

using namespace std;

//define
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define dump(x)  cerr << #x << " = " << (x) << endl;

#define INF (INT_MAX/3)
#define PI (2*acos(0.0))
#define EPS (1e-8)

typedef long long ll;
typedef unsigned long long ull;

int main(){
  ios_base::sync_with_stdio(0);
  int h, w;
  while(cin >> h >> w, h || w){
    char m[101][101];
    bool visited[101][101];
    bool loop = false;
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        cin >> m[i][j];
        visited[i][j] = false;
      }
    }
    int ph = 0, pw = 0;
    while(m[ph][pw] != '.'){
      if(visited[ph][pw]) { loop = true; break; }
      visited[ph][pw] = true;
      int op = m[ph][pw];
      switch(op){
        case '>':
          pw += 1;
          break;
        case '<':
          pw -= 1;
          break;
        case 'v':
          ph += 1;
          break;
        case '^':
          ph -= 1;
          break;
        default:
          break;
      }
    }
    if(loop) cout << "LOOP" << endl;
    else cout << pw << " " << ph << endl;
  }
  return 0;
}