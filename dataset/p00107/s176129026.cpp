#include <iostream>
#include <complex>
#include <sstream>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <limits>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < j; ++i)
#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define P pair<int, int>

bool check(int y, int x, int h, int r){
  int rr = r * 2, yy = y * y, xx = x * x, hh = h * h;
  if(sqrt(yy + xx) < rr) return true;
  if(sqrt(yy + hh) < rr) return true;
  if(sqrt(xx + hh) < rr) return true;
  return false;
}

int main() {
  int y, x, h;
  while(cin >>y >>x >>h && y){
    int n; cin >>n;
    REP(i, n){
      int r; cin >>r;
      if(check(y, x, h, r)) cout <<"OK" <<endl;
      else cout <<"NA" <<endl;
    }
  }
  return 0;
}