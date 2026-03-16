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

int n, maxn, maxdis;
int main() {
  while(cin >> n, n) {
    maxn = 0; maxdis = 0;
    rep(i, n) {
      int p, d0, d1;
      cin >> p >> d0 >> d1;
      if(maxdis < d0 + d1) {
        maxn = p;
        maxdis = d0 + d1;
      }
    }

    cout << maxn << " " << maxdis << endl;
  }
  
  return 0;
}