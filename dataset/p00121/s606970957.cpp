#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <string>

using namespace std;

map<string, int> res;
int d[4] = {1, -1, 4, -4};

void bfs() {
  queue<string> que;
  que.push("01234567");
  res["01234567"] = 0;
  while (!que.empty()) {
    string s = que.front();
    que.pop();
    int pos = 0;
    while (s[pos] != '0') pos++;
    for (int i = 0; i < 4; i++) {
      int npos = pos + d[i];
      if (0 <= npos && npos < 8 && !(pos == 3 && i == 0) &&
          !(pos == 4 && i == 1)) {
        string ns = s;
        swap(ns[pos], ns[npos]);
        if (res.find(ns) == res.end()) {
          res[ns] = res[s] + 1;
          que.push(ns);
        }
      }
    }
  }
}
int main() {
  bfs();
  string line;
  while (getline(cin, line)) {
    line.erase(remove(line.begin(), line.end(), ' '),
               line.end());  // remove white spaces
    cout << res[line] << endl;
  }
  return 0;
}
