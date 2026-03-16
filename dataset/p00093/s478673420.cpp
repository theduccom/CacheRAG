#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define sz(obj) ((int)(obj).size())
#define pb push_back

int a, b, f;
int main()
{
  cin >> a >> b;
  while (1){
    f = 1;
    FOR(i, a, b + 1){
      if (i % 4 == 0 && (i % 400 == 0 || i % 100 != 0)){
        cout << i << endl;
        f = 0;
      }
    }
    cin >> a >> b;
    if (f) cout << "NA" << endl;
    if (a + b == 0) break;
    else cout << endl;
  }
}