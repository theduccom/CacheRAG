#include <bits/stdc++.h>
using namespace std;
  
// #define int long long
#define pb push_back
#define print(Target) cout << Target << '\n';
#define REP(i, n) for (int i = 0; i < (n); i++)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vii;

bool is_uruu(int y) {return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));}

signed main()
{
  ios::sync_with_stdio(false);
  string s;

  while (cin >> s){
    while (s.find('@') != -1){
      string t;
      int key = s.find('@');
      REP(i, s[key + 1] - '0'){
        t += s[key + 2];
      }
      s.erase(key, 3);
      s.insert(key, t);
    }
    print(s);
  }

  return (0);
}