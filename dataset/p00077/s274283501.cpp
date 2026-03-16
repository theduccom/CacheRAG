#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef stack<int> si;
typedef deque<int> dqi;

#define rep(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define pf push_front
#define pb push_back
#define FST first
#define SEC second
#define sz(obj) ((int)(obj).size())

inline int gcd(int a, int b){if (a == 0) return (b); gcd(b % a, b);}

const int INF = 999999999;
const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  string str;

  while (cin >> str){
    rep(i, sz(str)){
      if (str[i] == '@'){
        int j = 0;
        while (j != str[i + 1] - '0'){
          cout << str[i + 2];
          j++;
        }
        i += 2;
      }
      else cout << str[i];
    }
    cout << endl;
  }
}