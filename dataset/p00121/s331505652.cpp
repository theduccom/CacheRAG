#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const double EPS = 1e-10;
const double PI  = acos(-1.0);

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int main() {
  int vec[] = {1, -1, 4, -4};
  queue<string> que;
  que.push("01234567");

  map<string, int> d;

  while (!que.empty()) {
    string str = que.front();
    que.pop();
    int zero = str.find("0");

    string str2;
    REP(i, 4) {
      int next_z = zero + vec[i];
      if (next_z >= 0 && next_z <= 7 && !((zero == 3 && next_z == 4) || (zero == 4 && next_z == 3))){
        str2 = str;
        swap(str2[zero], str2[next_z]);
        if (d.find(str2) == d.end()) {
          que.push(str2);
          d[str2] = d[str] + 1;
        }
      }
    }
  }

  string num;
  while (getline(cin, num)) {
    string::iterator end_it = remove(num.begin(), num.end(), ' ');
    num.erase(end_it, num.end());
    cout << d[num] << endl;
  }
}