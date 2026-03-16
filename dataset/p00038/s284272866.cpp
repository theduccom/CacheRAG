#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <cctype>
#include <numeric>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)

int c[6];
const string name[] = {
  "null", "one pair", "two pair", "three card",
  "full house", "straight", "four card"
};

void solve() {
  // count pair
  int cnt = 0;
  rep(i,4) for (int j = i+1; j < 5; ++j) {
    if (c[i] == c[j]) ++cnt;
  }

  // check straight
  bool flag = true;
  for (int i = 1; i <= 4; ++i) if (c[0] != c[i]-i) flag = false;
  if (!flag && c[0] == 1) {
    flag = true;
    for (int i = 1; i <= 4; ++i) if (c[i] != 9+i) flag = false;
  }
  if (flag && cnt < 4) cnt = 5;
  
  // output
  //rep(i,5) printf("%3d", c[i]);
  printf("%s\n", name[cnt].c_str());
}

int main() {
  while (scanf("%d", c) != -1) {
    rep(i,4) scanf(",%d", c+i+1);
    sort(c,c+5);
    solve();
  }
  return 0;
}