#include <bits/stdc++.h>
using namespace std;

char land[20][20];

void dfs(int y, int x) {
   land[y][x] = '0';
   if (y > 0 && land[y-1][x] == '1') dfs(y-1, x);
   if (x > 0 && land[y][x-1] == '1') dfs(y, x-1);
   if (y < 11 && land[y+1][x] == '1') dfs(y+1, x);
   if (x < 11 && land[y][x+1] == '1') dfs(y, x+1);
   return;
}

int main() {
   while (scanf("%s", land[0]) != EOF) {
      int cnt = 0;
      for  (int i = 1; i < 12; i++) {
         scanf("%s", land[i]);
      }

      for (int i = 0; i < 12; i++) {
         for (int j = 0; j < 12; j++) {
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
