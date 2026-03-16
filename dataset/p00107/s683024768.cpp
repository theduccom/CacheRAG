#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  int d[4],n,r;
  while(cin >> d[0] >> d[1] >> d[2] , d[0]){
    cin >> n;
    sort(d, d + 3);
    int ans = d[0] * d[0] + d[1] * d[1];
    while(n--){
      cin >> r;
      cout << (r * r * 4 > ans ? "OK" : "NA") << endl;
    }
  }
}