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
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < (int)(j); ++i)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
typedef complex<double> P;
const int N = 5;

class C{
  public:
    int num, cnt;
    C(){}
    C(int _n, int _c){ num = _n; cnt = _c; }
};

bool compare_num(const C &a, const C &b){ return a.num < b.num; }
bool compare_cnt(const C &a, const C &b){ return a.cnt < b.cnt; }

string solve(int cards[N]){
  vector<C> c;
  set<int> s;
  REP(i, N){
    int cnt = 0;
    REP(j, N) if(cards[i] == cards[j]) ++cnt;
    if(s.find(cards[i]) == s.end()) c.push_back(C(cards[i], cnt));
    s.insert(cards[i]);
  }
  sort(c.begin(), c.end(), compare_cnt);
  reverse(c.begin(), c.end());
  if(c[0].cnt == 4) return "four card";
  if(c[0].cnt == 3 && c[1].cnt == 2) return "full house";
  sort(c.begin(), c.end(), compare_num);
  if(c.size() == 5 && ((c[0].num + 1 == c[1].num && c[1].num + 1 == c[2].num && c[2].num + 1 == c[3].num && c[3].num + 1 == c[4].num) || (c[0].num == 1 && c[1].num == 10 && c[2].num == 11 && c[3].num == 12 && c[4].num == 13))) return "straight";
  sort(c.begin(), c.end(), compare_cnt);
  reverse(c.begin(), c.end());
  if(c[0].cnt == 3) return "three card";
  if(c[0].cnt == 2 && c[1].cnt == 2) return "two pair";
  if(c[0].cnt == 2) return "one pair";
  return "null";
}

int main() {
  int cards[N];
  while(scanf("%d,%d,%d,%d,%d", &cards[0], &cards[1], &cards[2], &cards[3], &cards[4]) != EOF) cout <<solve(cards) <<endl;
  return 0;
}