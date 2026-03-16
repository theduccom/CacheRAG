#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <bitset>
#include <set>
#include <map>
#include <stack>
#include <list>

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,b,n) for(int i=b;i<n;i++)
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

const float PI = 3.1415926;
static const int INFTY = (1<<30);

using namespace std;

typedef long long ll;
typedef long double ld;

int n;

int main() {
  while(cin >> n, n) {
    rep(i, n) {
      int pm, pe, pj;
      cin >> pm >> pe >> pj;
      float tmp1 = (pm + pe) / 2.0;
      float tmp2 = (pm + pe + pj) / 3.0;
      if(tmp1 >= 90 || tmp2 >= 80 || pm == 100 || pe == 100 || pj == 100) {
        cout << 'A' << endl;
      } else if (tmp2 >= 70 || (tmp2 >= 50 && (pm >= 80 || pe >= 80))) {
        cout << 'B' << endl;
      } else {
        cout << 'C' << endl;
      }
    }
  }
  return 0;
}