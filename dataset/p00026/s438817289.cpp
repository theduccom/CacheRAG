#include <cstdio>
#include <iostream>
using namespace std;

int p[14][14];

int main()
{
  int x, y, s;

  while (scanf("%d,%d,%d", &x, &y, &s) != EOF){
    p[x + 2][y + 1] += 1;
    p[x + 1][y + 2] += 1;
    p[x + 2][y + 2] += 1;
    p[x + 3][y + 2] += 1;
    p[x + 2][y + 3] += 1;

    if (s >= 2){
      p[x + 1][y + 1] += 1;
      p[x + 3][y + 1] += 1;
      p[x + 1][y + 3] += 1;
      p[x + 3][y + 3] += 1;
    }

    if (s == 3){
      p[x][y + 2] += 1;
      p[x + 2][y] += 1;
      p[x + 4][y + 2] += 1;
      p[x + 2][y + 4] += 1;
    }
  }

  int cnt, max;

  cnt = max = 0;

  for (int i = 2; i < 12; i++){
    for (int j = 2; j < 12; j++){
      if (p[i][j] == 0){
        cnt++;
      }
      if (max < p[i][j]){
        max = p[i][j];
      }
    }
  }
  cout << cnt << endl << max << endl;
}