#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <string>

using namespace std;

int a[8];
int d[4] = {-1, 1, -4, 4};

map<string, int> mymap;

void bfs() {
  queue<string> q;
  q.push("01234567");
  mymap["01234567"] = 0;
  while (!q.empty()) {
    string cur = q.front();
    string nxt;
    q.pop();
    int p = (int) cur.find("0");
    for (int i = 0; i < 4; ++i) {
      int np = p + d[i];
      if (np >= 0 && np < 8 && (p != 3 || d[i] != 1) && (p != 4 || d[i] != -1)) {
        nxt = cur;
        nxt[np] = '0';
        nxt[p] = cur[np];
        if (mymap.find(nxt) == mymap.end()) {
          mymap[nxt] = mymap[cur] + 1;
          q.push(nxt);
        }
      }

    }
  }
}

int main() {
  bfs();
  while (cin >> a[0]) {
    for (int i = 1; i < 8; ++i) {
      cin >> a[i];
    }
    string s = "";
    for (int i = 0; i < 8; ++i) {
      s += a[i] + '0';
    }
    if (mymap.find(s) == mymap.end())
      cout << -1 << endl;
    else
      cout << mymap[s] << endl;
  }
  return 0;
}