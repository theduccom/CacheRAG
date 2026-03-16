#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <utility>
#include <memory>
#include <functional>
#include <deque>
#include <cctype>
#include <numeric>
#include <ctime>
#include <bitset>
#include <cctype>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>

using namespace std;

//define
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define dump(x)  cerr << #x << " = " << (x) << endl;

#define INF (INT_MAX/2)
#define PI (2*acos(0.0))
#define EPS (1e-8)

#define REP(i,a,b) for(int i=(a); i<(b);++i)
#define rep(i,n) REP(i,0,n)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef vector<int> vint;
typedef vector<vector<int> > vvint;
typedef vector<ll> vll;
typedef vector<vector<ll> > vvll;

int dx[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(void){
  ios_base::sync_with_stdio(0);
  int n;
  while(cin >> n, n){
    vector< vector<int> > vec(n + 1, vector<int>(n + 1, 0));
    for(int i = 0; i < n; i++){
      int sum = 0;
      for(int j = 0; j < n; j++){
        cin >> vec[i][j];
        sum += vec[i][j];
      }
      vec[i][n] = sum;
    }

    for(int i = 0; i <= n; i++){
      int sum = 0;
      for(int j = 0; j <= n; j++){
        sum += vec[j][i];
      }
      vec[n][i] = sum;
    }
    for(int i = 0; i <= n; i++){
      for(int j = 0; j <= n; j++){
        printf("%5d", vec[i][j]);
      }
      printf("\n");
    }
  }
  return 0; 
}