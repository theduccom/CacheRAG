#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

map<vector<int>, int> memo;
void check(const vector<int> &v, int i, int j, queue<vector<int> > &que) {
  vector<int> nv = v;
  swap(nv[i], nv[j]);
  if (memo.count(nv) == 0) {
    memo[nv] = memo[v] + 1;
    que.push(nv);
  }
}

void init() {
  vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7};
  queue<vector<int> > que;
  que.push(v);
  memo[v] = 0;
  while (!que.empty()) {
    v = que.front(); que.pop();
    int id = 0;
    while (v[id] != 0) ++id;
    if (id == 0) {
      check(v, id, id + 1, que);
      check(v, id, id + 4, que);
    }
    else if (id == 3) {
      check(v, id, id - 1, que);
      check(v, id, id + 4, que);
    }
    else if (id == 4) {
      check(v, id, id + 1, que);
      check(v, id, id - 4, que);
    }
    else if (id == 7) {
      check(v, id, id - 1, que);
      check(v, id, id - 4, que);
    }
    else {
      check(v, id, id + 1, que);
      check(v, id, id - 1, que);
      check(v, id, (id + 4) % 8, que);
    }
  }
}

int main() {
  init();
  string s;
  while (getline(cin, s)) {
    stringstream ss(s);
    string ns;
    vector<int> v;
    while(getline(ss, ns, ' ')) {
      int n = stoi(ns);
      v.push_back(n);
    }
    printf("%d\n", memo[v]);
  }
  
  return 0;
}