#include <bits/stdc++.h>

#define INF 1e9
#define LLINF 1e18
#define PI 3.1415926535897932384
#define MOD 1000000007

#define REP(i, n) for(int i=0; i<n; ++i)
#define REPR(i, n) for(int i=n; i>=0; --i)
#define REPS(i, m, n) for(int i=m; i<n; ++i)
#define SORT(v, n) sort(v, v+n)
#define RSORT(v, n) sort(v, v+n, greater<int>());
#define VSORT(v) sort(v.begin(), v.end());
#define RVSORT(v) sort(v.rbegin(), v.rend());
#define PB(n) push_back(n)
using namespace std;

int main() {
  for(;;) {
    int n, m;
    cin >> n >> m;
    if(n == 0) return 0;

    vector<int> v(n);
    REP(i,n) 
      cin >> v[i];
    RVSORT(v);

    for(int i=m-1; i<n; i+=m)
      v[i] = 0;

    cout << accumulate(v.begin(), v.end(), 0) << endl;
  }
}




