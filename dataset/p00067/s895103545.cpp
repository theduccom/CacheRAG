// 頭いいコード
#include <bits/stdc++.h>
using namespace std;

const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};
char land[20][20];

// 始点から地続きになっている部分を全部消す
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
   while (scanf("%s", land[0]) != EOF) {
      for  (int i = 1; i < 12; i++) {
         scanf("%s", land[i]);
      }

      int cnt = 0;
      for (int i = 0; i < 12; i++) {
         for (int j = 0; j < 12; j++) {
            // 黒ならそこに島があるのでカウントをプラス
            if (land[i][j] == '1') {
               cnt++;
               dfs(i, j);
            }
         }
      }

      printf("%d\n", cnt);
   }

   return 0;
}
