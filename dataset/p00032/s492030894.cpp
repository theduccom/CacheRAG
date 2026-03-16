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
  string s;
  int rec = 0, hi = 0;
  while(cin >> s){
    s += ",";
    vector<int> ed;
    string tmp = "";
    rep(i, s.size()){
      if(s[i] == ','){
        ed.pb(stoi(tmp));
        tmp = "";
      }else{
        tmp += s[i];
      }
    }
    if(ed[2] * ed[2] == ed[1] * ed[1] + ed[0] * ed[0]){
      rec++;
    }
    if(ed[0] == ed[1])hi++;
  }
  cout << rec << endl;
  cout << hi << endl;
	return 0;
}

