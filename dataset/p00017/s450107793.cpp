#include <bits/stdc++.h>
using namespace std;

// #define int long long

/* short */
#define pb push_back
#define print(Target) cout << Target << '\n'

/* REPmacro */
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REPS(i, a, n) for (int i = (a); i < (n); i++)

/* typedef */
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int, int> pii;

/* func */
inline bool is_uruu(int y) {return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));}

/* const */
const int INF = INT_MAX;

signed main()
{
  ios::sync_with_stdio(false);
  string s;

  while (getline(cin, s), s != ""){
    for (;s.find("the") == -1 && s.find("this") == -1 && s.find("that") == -1;){
      REP(i, s.size()){
        if ('a' <= s[i] && s[i] <= 'y'){
          s[i]++;
        } else if (s[i] == 'z'){
          s[i] = 'a';
        }
      }
    }
    print(s);
  }
  
  return (0);
}