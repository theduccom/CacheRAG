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
typedef pair<double, double> Pd;
 
// constants
const int inf = 1e9;
const ll linf = 1LL << 50;
const double EPS = 1e-10;

// solve

int main(int argc, char const* argv[])
{
  string tmp;
  string s[8];
  unordered_map<int, string> mp;
  mp[18] = "A";
  mp[48] = "B";
  mp[6] = "C";
  mp[30] = "D";
  mp[20] = "E";
  mp[34] = "F";
  mp[16] = "G";
  do{
    rep(i, 8){
      if(!getline(cin, s[i])){
        return 0;
      }
    }
    int at = -1;
    int sum = 0;
    rep(i, 8){
      rep(j, 8){
        if(s[i][j] == '1'){
          if(at == -1){
            at = i * 8 + j;
          }else{
            sum += i * 8 + j - at;
          }
        }
      }
    }
    cout << mp[sum] << endl;
  }while(getline(cin, tmp));
	return 0;
}

