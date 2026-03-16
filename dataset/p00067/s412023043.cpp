#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define debug(x) cerr << #x << ": " << x << endl;
#define line() cerr << "---------------" << endl;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
char land[20][20];
bool visited[20][20];

int dfs(int y, int x) {
   if (visited[y][x]) return 0;
   if (land[y][x] == '0') return 0;
   visited[y][x] = true;

   int ret = 1;
   for (int i = 0; i < 4; i++) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny < 0 || ny >= 12 || nx < 0 || nx >= 12) continue;
      if (land[ny][nx] == '0') continue;
      if (visited[ny][nx]) continue;

      ret += dfs(ny, nx);
   }

   return ret;
}

int main() {
   while ( ~scanf("%s", land[0])) {
      memset(visited, false, sizeof(visited));
      for (int i = 1; i < 12; i++) {
         scanf("%s", land[i]);
      }
      
      int cnt = 0;
      for (int i = 0; i < 12; i++) {
         for (int j = 0; j < 12; j++) {
            cnt += (dfs(i, j) ? 1 : 0);
         }
      }

      cout << cnt << endl;
   }

   return 0;
}
