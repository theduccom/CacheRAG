#include <cstdio>
#include <iostream>
using namespace std;
bool t[3][5][5] = {
  {{0,0,0,0,0}, {0,0,1,0,0}, {0,1,1,1,0}, {0,0,1,0,0}, {0,0,0,0,0}},
  {{0,0,0,0,0}, {0,1,1,1,0}, {0,1,1,1,0}, {0,1,1,1,0}, {0,0,0,0,0}},
  {{0,0,1,0,0}, {0,1,1,1,0}, {1,1,1,1,1}, {0,1,1,1,0}, {0,0,1,0,0}}
};
int main() {
  int a[10][10] = {}, x, y, s, i, j, m = 0, c = 0;
  while (scanf("%d,%d,%d", &x, &y, &s) != EOF) {
    for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++) {
        if ((x + i - 2) < 0 || (x + i - 2) > 9 || (y + j - 2) < 0 || (y + j - 2) > 9)
          continue;
        if (t[s - 1][i][j])
          a[x + i - 2][y + j - 2]++;
      }
    }
  }
  for (x = 0; x < 10; x++) {
    for (y = 0; y < 10; y++) {
      if (!a[x][y])
        c++;
      if (a[x][y] > m)
        m = a[x][y];
    }
  }
  cout << c << endl;
  cout << m << endl;
  return 0;
}