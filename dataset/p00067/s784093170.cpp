#include <bits/stdc++.h>
using namespace std;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};
char land[20][20];

void dfs(int y, int x) {
   land[y][x] = '0';
   for (int i = 0; i < 4; i++) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny >= 0 && ny < 12 && nx >= 0 && nx < 12 && land[ny][nx] == '1') {
         dfs(ny, nx);
      }
   }
   return;
}

int main() {
   while (cin >> land[0]) {
      for (int i = 1; i < 12; i++) {
         cin >> land[i];
      }

      int cnt = 0;
      for (int i = 0; i < 12; i++) {
         for (int j = 0; j < 12; j++) {
            if (land[i][j] == '1') {
               cnt++;
               dfs(i ,j);
            }
         }
      }
      cout << cnt << endl;
   }

   return 0;
}
