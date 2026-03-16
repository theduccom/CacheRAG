#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
int INF = 1e9+7;
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for(auto i = (c).begin(); i != (c).end(); i++)
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())

int total(vi& unit, vi& sellnr)
{
  int res = 0;
  for (int i = 0; i < sz(unit); i++) {
    res += unit[i] * sellnr[i];
  }
  return res;
}

int avg(vi& sellnr)
{
  int total = 0;
  for (int i = 0; i < sz(sellnr); i++) {
    total += sellnr[i];
  }
  return round((double)total/sz(sellnr));
}

int main(int argc, char **argv)
{
  int u, s;
  char c;
  vi unit, sellnr;
  while (cin >> u >> c >> s) {
    unit.pb(u);
    sellnr.pb(s);
  }
  cout << total(unit, sellnr) << endl;
  cout << avg(sellnr) << endl;
  return 0;
}