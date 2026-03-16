#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vvi vector<vector<int>>
#define vec vector
#define pq priority_queue
#define all(v) (v).begin(), (v).end()
#define rep(i, n, m) for (int (i) = (n); (i) < (m); ++(i))
#define debug(x) cerr << #x << ": " << x << endl;
#define debug2(x, y) cerr<<"("<<#x<<", "<<#y<<") = "<<"("<<x<<", "<<y<<")"<<endl;
#define debugB(x, y) cerr<<#x<<": "<<bitset<y>(x) << endl;
#define line() cerr << "---------------" << endl;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};

string G[15];

void dfs(int y, int x) {
   G[y][x] = '0';
   for (int i = 0; i < 4; i++) {
      int ny = y+dy[i], nx = x+dx[i];
      if (ny>=0 && ny<12 && nx>=0 && nx<12 && G[ny][nx]=='1') {
         dfs(ny, nx);
      }
   }
}

int main() {
   while (cin >> G[0]) {
      rep (i, 1, 12) {
         cin >> G[i];
      }

      int cnt = 0;
      for (int i = 0; i < 12; i++) {
         for (int j = 0; j < 12; j++) {
            if (G[i][j] == '1') {
               dfs(i, j);
               cnt++;
            }
         }
      }
      cout << cnt << endl;
   }

   return 0;
}
