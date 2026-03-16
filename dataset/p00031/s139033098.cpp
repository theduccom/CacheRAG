#include <bits/stdc++.h>
 
using namespace std;
 
/*-------------------------------*/
#define FOR(i, a, b) for(int i = (a); i < (b); i++) 
#define RFOR(i, a, b) for(int i = (b) - 1; i >= (a); i--)
#define REP(i, n) for(int i = 0; i < (n); i++)
#define RREP(i, n) for(int i = (n) - 1; i >= 0; i--)
#define all(i) (i).begin(),(i).end()
#define pb push_back
#define mp make_pair 
 
typedef long long ll;
typedef pair<int, int> pint;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef vector<long long> llv;
typedef vector<pint> vpint;
/*-------------------------------*/
 
int main(void)
{
  int pw[10] = {512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
  int n;
  
  while (cin >> n){
    vi li;
    int cnt = 0;
    REP(i, 10){
      if (n - pw[i] >= 0){
        n -= pw[i];
        li.pb(pw[i]);
        cnt++;
      }
    }
    sort(all(li));
    REP(i, cnt){
      if (i == cnt - 1) cout << li[i] << endl;
      else cout << li[i] << " ";
    }
  }

  return 0;
}