#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (ll i = (ll)a; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define MP make_pair
#define PB push_back
#define MOD 1000000007
#define INF (1LL<<30)
#define LLINF (1LL<<60)
#define PI 3.14159265359
#define EPS 1e-12
#define int ll

string s[8];
signed main(void)
{
  int cnt = 0;
  while(getline(cin, s[cnt])) {
    if(s[cnt] == "") continue;
    if(cnt == 7) {
      REP(i, 8) REP(j, 8) {
        if(i <= 6 && j <= 6 && s[i][j] == '1' && s[i][j+1] == '1' && s[i+1][j] == '1' && s[i+1][j+1] == '1')
          cout << "A" << endl;
        else if(i <= 4 && s[i][j] == '1' && s[i+1][j] == '1' && s[i+2][j] == '1' && s[i+3][j] == '1')
          cout << "B" << endl;
        else if(j <= 4 && s[i][j] == '1' && s[i][j+1] == '1' && s[i][j+2] == '1' && s[i][j+3] == '1')
          cout << "C" << endl;
        else if(i <= 5 && j >= 1 && s[i][j] == '1' && s[i+1][j] == '1' && s[i+1][j-1] == '1' && s[i+2][j-1] == '1')
          cout << "D" << endl;
        else if(i <= 6 && j <= 5 && s[i][j] == '1' && s[i][j+1] == '1' && s[i+1][j+1] == '1' && s[i+1][j+2] == '1')
          cout << "E" << endl;
        else if(i <= 5 && j <= 6 && s[i][j] == '1' && s[i+1][j] == '1' && s[i+1][j+1] == '1' && s[i+2][j+1] == '1')
          cout << "F" << endl;
        else if(i >= 1 && j <= 5 && s[i][j] == '1' && s[i][j+1] == '1' && s[i-1][j+1] == '1' && s[i-1][j+2] == '1')
          cout << "G" << endl;
      }
    }
    cnt++;
    if(cnt == 8) cnt = 0;
  }

  return 0;
}