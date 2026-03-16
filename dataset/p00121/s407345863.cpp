#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
#include <deque>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
map< vector<int>, int > mp;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
void init(vector<int> v) {
  queue< vector<int> > que;
  que.push(v);
  while(!que.empty()) {
    vector<int> cur = que.front(); que.pop();
    // 0?????´???
    int idx = 0;
    FOR(i,0,8) {
      if(cur[i] == 0) {
        idx = i;
        break;
      }
    }
    int dist = mp[cur];
    FOR(k,0,4) {
      vector<int> tmp = cur;
      int nx = idx % 4 + dx[k];
      int ny = idx / 4 + dy[k];
      if(nx < 0 || nx >= 4 || ny < 0 || ny >= 2) continue;
      int ns = nx + ny * 4;
      swap(tmp[ns], tmp[idx]);
      if(mp.count(tmp)) continue;
      mp[tmp] = dist + 1;
      que.push(tmp);
    }
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> v;
  FOR(i,0,8) v.push_back(i);
  init(v);
  string s;
  while(getline(cin, s)) {
    stringstream ss(s);
    vector<int> vv;
    int num;
    while(ss>>num) vv.push_back(num);
    cout << mp[vv] << endl;
  }
  return 0;
}