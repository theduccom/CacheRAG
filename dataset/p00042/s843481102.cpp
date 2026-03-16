#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())

bool piicomp(const pii& a, const pii& b)
{
  if (a.first < b.first)
    return true;
  else if (a.first > b.first)
    return false;
  else {
    if (a.second > b.second)
      return true;
    else
      return false;
  }
}

typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
const int maxitem = 1005;
vvpii dp(maxitem, vpii(maxitem, pii(0,0)));

pii rec(int capacity, int i, vi& value, vi& weight)
{
  if (i >= sz(value))
    return pii(0,0);
  if (dp[capacity][i].first != -1)
    return dp[capacity][i];
  if (weight[i] > capacity)
    return dp[capacity][i] = rec(capacity, i+1, value, weight);

  pii tmp = rec(capacity-weight[i], i+1, value, weight);
  return dp[capacity][i] = max(pii(tmp.first+value[i], tmp.second+weight[i]),
                               rec(capacity, i+1, value, weight),
                               piicomp);
}

void thief(int capacity, vi& value, vi& weight)
{
  for (auto& i : dp) {
    for (auto& j : i) {
      j = pii(-1,-1);
    }
  }
  pii res = rec(capacity, 0, value, weight);
  cout << res.first << endl;
  cout << res.second << endl;
}

int main(int argc, char **argv)
{
  int casenr = 0;
  for (;;) {
    int W, N;
    cin >> W;
    if (!W)
      break;
    cin >> N;
    vi value(N), weight(N);
    rep (i, N) {
      char c;
      cin >> value[i] >> c >> weight[i];
    }
    cout << "Case " << ++casenr << ":" << endl;
    thief(W, value, weight);
  }
  return 0;
}