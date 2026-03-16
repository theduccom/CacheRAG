#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main() {
  int n;
  while(cin >> n, n) {
    unsigned long long a[4100] = {};
    vi in(n);
    rep(i, n) {
      int p, q, r; cin >> p >> q >> r;
      a[p] += q*r;
      in[i] = p;
    }

    bool b = false;
    rep(i, n) {
      if(a[in[i]] >= 1000000) {
        cout << in[i] << endl;
        a[in[i]] = 0;
        b = true;
      }
    }
    if(!b) cout << "NA" << endl;
  }
}