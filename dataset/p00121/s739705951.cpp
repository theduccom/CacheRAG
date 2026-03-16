#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vvi vector<vector<int>>
#define vec vector
#define pq priority_queue
#define all(v) (v).begin(), (v).end()
#define uniqueV(x) sort(x.begin(), x.end()); x.erase(unique(x.begin(), x.end()), x.end());
#define rep(i, n) for (int (i) = (0); (i) < (n); ++(i))
#define repp(i, m, n) for (int (i) = (m); (i) < (n); ++(i))
#define dbg(x) cerr << #x << ": " << x << endl;
#define dbg2(x, y) cerr<<"("<<#x<<", "<<#y<<") = "<<"("<<x<<", "<<y<<")"<<endl;
#define dbg3(x, y, z) cerr<<"("<<#x<<", "<<#y<<", "<<#z<<") = "<<"("<<x<<", "<<y<<", "<<z<<")"<<endl;
#define dbgB(value, size) cerr<<#value<<": "<<bitset<size>(value) << endl;
#define line() cerr << "---------------" << endl;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const double PI = 3.14159265358979323846;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

template<typename T>
void printA(vector<T> &printArray, char between = ' ') {
  int paSize = printArray.size();
  for (int i = 0; i < paSize; i++) { cerr << printArray[i] << between;}
  if (between != '\n') {cerr << endl;}
}

// ------------------------------------------------------------------------------------------

map<vector<int>, int> mp;

void bfs(vector<int> v) {
  queue<vector<int>> que;
  que.push(v);
  mp[v] = 0;

  while (que.size()) {
    vector<int> t = que.front(); que.pop();

    // 0の位置を求める
    int zeroPos = 0;
    for (int i = 0; i < t.size(); i++) {
      if (t[i] == 0) zeroPos = i;
    }

    int y = zeroPos / 4, x = zeroPos % 4;
    for (int i = 0; i < 4; i++) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny < 0 || ny >= 2 || nx < 0 || nx >= 4) continue;
      vector<int> tt = t;
      int pos = y * 4 + x, npos = ny * 4 + nx;
      swap(tt[pos], tt[npos]);
      if (mp.count(tt)) continue;
      mp[tt] = mp[t] + 1;
      que.push(tt);
    }
  }
}

signed main() {
  vector<int> first(8);
  iota(all(first), 0);
  bfs(first);

  string s;
  while (getline(cin, s)) {
    vector<int> v;
    for (int i = 0; i < s.size(); i+=2) {
      v.push_back(s[i] - '0');
    }
    cout << mp[v] << endl;
  }

  return 0;
}
