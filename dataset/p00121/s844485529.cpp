#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vvi vector<vector<int>>
#define vec vector
#define pq priority_queue
#define all(v) (v).begin(), (v).end()
#define uniqueV(x) sort(x.begin(), x.end()); x.erase(unique(x.begin(), x.end()), x.end());
#define rep(i, n) for (int (i) = (0); (i) < (n); ++(i))
#define repp(i, m, n) for (int (i) = (m); (i) < (n); ++(i))
#define debug(x) cerr << #x << ": " << x << endl;
#define debug2(x, y) cerr<<"("<<#x<<", "<<#y<<") = "<<"("<<x<<", "<<y<<")"<<endl;
#define debug3(x, y, z) cerr<<"("<<#x<<", "<<#y<<", "<<#z<<") = "<<"("<<x<<", "<<y<<", "<<z<<")"<<endl;
#define debugB(x, y) cerr<<#x<<": "<<bitset<y>(x) << endl;
#define line() cerr << "---------------" << endl;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};

template<typename T>
void printA(vector<T> &printArray, char between = ' ') {
   int paSize = printArray.size();
   for (int i = 0; i < paSize; i++) { cerr << printArray[i] << between;}
   if (between != '\n') {cerr << endl;}
}

// ------------------------------------------------------------------------------------------

map<vector<int>, int> mp;

void init(vector<int> v) {
   queue<vector<int>> que;
   que.push(v);
   while (que.size()) {
      vector<int> cur = que.front(); que.pop();

      int idx = -1;
      rep (i, 8) {
         if (cur[i] == 0) {
            idx = i;
            break;
         }
      }

      rep (k, 4) {
         int nx = (idx / 4) + dx[k];
         int ny = (idx % 4) + dy[k];
         if (nx < 0 || nx >= 2 || ny < 0 || ny >= 4) continue;
         int nc = nx * 4 + ny;
         vector<int> tmp = cur;
         swap(tmp[nc], tmp[idx]);
         if (mp.count(tmp)) continue;
         mp[tmp] = mp[cur] + 1;
         que.push(tmp);
      }
   }
}

int main() {
   vector<int> v(8);
   iota(all(v), 0);
   mp[v] = 0;
   init(v);

   string s;
   while (getline(cin, s)) {
      stringstream ss(s);
      vector<int> vs;
      int val;
      while (ss >> val) vs.push_back(val);
      cout << mp[vs] << endl;
   }

   return 0;
}
