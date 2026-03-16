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
  double x = 0.0, y = 0.0, angle = 90.;
  while(true){
    cin >> s;
    int d = 0, a = 0;
    rep(i, s.size()){
      if(s[i] == ','){
        d = stoi(s.substr(0, i));
        a = stoi(s.substr(i+1, s.size()));
        break;
      }
    }
    if(d == 0 && a == 0)break;
    x += double(d) * cos(angle * M_PI/180.);
    y += double(d) * sin(angle * M_PI/180.);
    angle -= a;
  }
  cout << int(x) << endl;
  cout << int(y) << endl;
	return 0;
}

