// includes
#include <cstdio>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <utility>
#include <functional>
#include <cmath>
#include <climits>
#include <bitset>

// macros
#define ll long long int
#define pb push_back
#define mk make_pair
#define pq priority_queue
#define FOR(i, a, b) for(int i=(a); i<(b);++i)
#define rep(i, n) FOR(i, 0, n)

using namespace std;

//  types
typedef pair<int, int> P;
typedef pair<ll, int> Pl;
typedef pair<ll, ll> Pll;
 
// constants
const int inf = 1e9;
const ll linf = 1LL << 50;
const double EPS = 1e-10;

// solve
int b[10][10];

void set_(int x, int y){
  if(x >= 0 && x < 10 && y >= 0 && y < 10)b[x][y] += 1;
}

int main(int argc, char const* argv[])
{
  string ss;
  while(cin >> ss){
    int x = -1, y = -1, s;
    string tmp = "";
    rep(i, ss.size()){
      if(ss[i] != ',')tmp += ss[i];
      else{
        if(x == -1)x = stoi(tmp);
        else y = stoi(tmp);
        tmp = "";
      }
    }
    s = stoi(tmp);
    if(s == 1){
      set_(x, y-1);
      set_(x-1, y); set_(x, y); set_(x+1, y);
      set_(x, y+1);
    }else if(s == 2){
      rep(i, 3){
        rep(j, 3){
          set_(x + i - 1, y + j - 1);
        }
      }
    }else{
      set_(x, y - 2);
      set_(x, y + 2);
      set_(x - 2, y);
      set_(x + 2, y);
      rep(i, 3){
        rep(j, 3){
          set_(x + i - 1, y + j - 1);
        }
      }
    }
  }
  int res = 0;
  int maxi = 0;
  rep(i, 10){
    rep(j, 10){
      if(b[i][j] == 0)res++;
      maxi = max(maxi, b[i][j]);
    }
  }
  cout << res << endl;
  cout << maxi << endl;
	return 0;
}

