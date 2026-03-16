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
int KIHON = 1150;
int PLAN2 = 125;
int PLAN3 = 140;
int PLAN4 = 160;
int sen, kon;

int main() {
  sen = 4280;
  while(cin >> n) {
    if(n < 0) break;
    n -= 10;
    kon = KIHON;
    if(n > 0) {
      if(n - 10 >= 0) {
        kon += PLAN2 * 10;
      } else {
        kon += PLAN2 * n;
      }
      n -= 10;
    }
    if(n > 0) {
      if(n - 10 >= 0) {
        kon += PLAN3 * 10;
      } else {
        kon += PLAN3 * n;
      }
      n -= 10;
    }
    if(n > 0) {
      kon += PLAN4 * n;
    }

    cout << sen - kon << endl;
  }
  
  return 0;
}