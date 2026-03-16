#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct Node {
  int start;
  string buf;
  Node(int index, string s): start(index), buf(s) {}
};

int dir[4] = {-1, 1, -4, 4};
unordered_map<string, int> dp;

void solve() {
  dp["01234567"] = 0;
  int step = 0;
  queue<Node> q;
  q.push(Node(0, "01234567"));
  while (!q.empty()) {
    int size = q.size();
    step++;
    while (size-- > 0) {
      Node cur = q.front();
      q.pop();
      for (int i = 0; i < 4; ++i) {
        int next_p = cur.start + dir[i];
        if (next_p >= 0 && next_p < 8
            && !(cur.start == 4 && i == 0)
            && !(cur.start == 3 && i == 1)) {
          string next = cur.buf;
          swap(next[cur.start], next[next_p]);
          if (dp.count(next) == 0) {
            dp[next] = step;
            q.push(Node(next_p, next));
          }
        }
      }
    }
  }
}

int main() {
  solve();
  string input;
  char c;
  while (cin >> c) {
    input.clear();
    input.append(1, c);
    for (int i = 0; i < 7; ++i) {
       cin >> c;
        input.append(1, c);
     }
     cout << dp[input] << endl;
  }
  return 0;
}