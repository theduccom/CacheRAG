#include <bits/stdc++.h>
using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};

map<vector<int>, int> mp; // mp[パズルの状態] = その状態になるまでの手数

void bfs(vector<int> origin) {
  // キューを初期化
  queue<vector<int>> que;
  que.push(origin);
  // データを初期化
  mp[origin] = 0;

  while (que.size()) {
    vector<int> axis = que.front(); que.pop();

    // 0の位置を求める
    int zeroPos = 0;
    for (int i = 0; i < axis.size(); i++) {
      if (axis[i] == 0) zeroPos = i;
    }
    int y = zeroPos / 4, x = zeroPos % 4;
    int pos = y * 4 + x;

    for (int i = 0; i < 4; i++) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny < 0 || ny >= 2 || nx < 0 || nx >= 4) continue;

      vector<int> next = axis;
      int npos = ny * 4 + nx;
      swap(next[pos], next[npos]);
      if (mp.count(next)) continue;

      mp[next] = mp[axis] + 1;
      que.push(next);
    }
  }
}

signed main() {
  // 前処理
  vector<int> origin(8);
  iota(origin.begin(), origin.end(), 0);
  bfs(origin);

  string s;
  while (getline(cin, s)) {
    // 文字列の入力を数値の配列にする
    vector<int> v;
    for (int i = 0; i < s.size(); i+=2) {
      v.push_back(s[i] - '0');
    }
    // 前計算の結果を出力するだけ
    cout << mp[v] << endl;
  }

  return 0;
}
