#include <algorithm>
#include <bitset>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <utility>
using namespace std;

#define ABS(a) (((a) >= 0) ? (a) : -(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define RFOR(i, a, b) for (int i = a; i > b; --i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define int long long

typedef long long ll;
typedef pair<int, int> Pair;

const int kMaxH = 1000;
const int kMaxW = 1000;
const int kInf = 1000000000;

map<string, int> m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

class Field {
public:
  string f = "";
  int z;
  int cnt;

  bool MoveFrom(Field f0, int i) {
    f = f0.f;
    z = f0.z;
    cnt = f0.cnt;

    // 移動先の座標決定
    int nz;
    if (i == 0) { // 右
      if (z == 3 || z == 7) { return false; }
      nz = z+1;
    } else if (i == 1) { // 下
      if (4 <= z && z <= 7) { return false; }
      nz = z+4;
    } else if (i == 2) { // 左
      if (z == 0 || z == 4) { return false; }
      nz = z-1;
    } else if (i == 3) { // 上
      if (0 <= z && z <= 3) { return false; }
      nz = z-4;
    }

    // 入れ替えなど
    char tmp = f[z];
    f[z] = f[nz];
    f[nz] = tmp;
    z = nz;
    ++cnt;
    return true;
  }
};

void Init() {
  queue<Field> que;

  Field f0 = {"01234567", 0, 0};
  m[f0.f] = f0.cnt;
  que.push(f0);
  while (que.size()) {
    Field cf = que.front(); que.pop();

    REP(i, 4) {
      Field nf;
      if (nf.MoveFrom(cf, i)) {
        if (m.find(nf.f) != m.end()) { continue; }
        que.push(nf);
        m[nf.f] = nf.cnt;
      }
    }
  }

  return;
}

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  Init();
  while (true) {
    string s;
    REP(i, 8) {
      char c;
      cin >> c;
      if (cin.fail()) { goto r; }
      s.push_back(c);
    }
    int ans = m[s];
    cout << ans << endl;
  }
r:
  return 0;
}

