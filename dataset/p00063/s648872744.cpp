#include <bits/stdc++.h>
using namespace std;
  
// #define int long long
#define pb push_back
#define print(Target) cout << Target << '\n'

#define REP(i, n) for (int i = 0; i < (n); i++)
#define REPS(i, a, n) for (int i = (a); i < (n); i++)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int, int> pii;

bool is_uruu(int y) {return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));}

signed main()
{
  ios::sync_with_stdio(false);
  string n;
  int cnt = 0;
  while (cin >> n){
    string res = n;
    reverse(res.begin(), res.end());
    if (res == n){
      cnt++;
    }
  }
  print(cnt);

  return (0);
}