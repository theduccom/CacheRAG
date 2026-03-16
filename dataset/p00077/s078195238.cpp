#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

#define MOD 1000000007
#define REP(i, N) for (int i = 0; i < N; ++i)
#define REP1(i, N) for (int i = 1; i <= N; ++i)
#define RREP(i, N) for (int i = N - 1; i >= 0; --i)
#define ALL(a) a.begin(), a.end()

int main() {
  string s;
  while (cin >> s) {
    int n = s.size();
    for (int i = 0; i < n;) {
      if (s[i] == '@') {
        i++;
        int cnt = s[i++] - '0';
        char c = s[i++];
        REP(j, cnt) cout << c;
      } else {
        cout << s[i++];
      }
    }
    cout << "\n";
  }
  return 0;
}
