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

int main(int argc, char const* argv[])
{
  int n;
  cin >> n;
  rep(i, n){
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    string res = "";
    int tmp = 0;
    rep(i, max(s.size(), t.size())){
      int sn = 0, tn = 0;
      if(i < s.size())sn = int(s[i] - '0');
      if(i < t.size())tn = int(t[i] - '0');
      int num = tmp + sn + tn;
      tmp = num / 10;
      res += char('0' + (num % 10));
    }
    if(tmp > 0)res += char('0' + tmp);
    reverse(res.begin(), res.end());
    if(res.size() <= 80)cout << res << endl;
    else cout << "overflow" << endl;
  }
	return 0;
}

