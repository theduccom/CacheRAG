#include <iostream>
#include <cstdio>

using namespace std;

int sheet[10 + 4][10 + 4];
int sx[] = {1, 0, -1, 0};
int sy[] = {0, -1, 0, 1};
int ssize = 4;
int mx[] = {1, 1, 1, 0, -1, -1, -1, 0};
int my[] = {1, 0, -1, -1, -1, 0, 1, 1};
int msize = 8;
int lx[] = {1, 1, 1, 0, -1, -1, -1, 0, 2, 0, -2, 0};
int ly[] = {1, 0, -1, -1, -1, 0, 1, 1, 0, -2, 0, 2};
int lsize = 12;

int main()
{
  int x, y, size;
  for (int i = 0; i < 15; i++) {
    fill(sheet[i], &sheet[i][15], 0);
  }
  while (scanf("%d,%d,%d ", &x, &y, &size) == 3) {
    //printf("%d,%d,%d\n", x, y, size);
    x += 2, y += 2;
    sheet[x][y]++;
    if (size == 1) {
      for (int i = 0; i < ssize; i++) {
	sheet[x + sx[i]][y + sy[i]]++;
      }
    } else if (size == 2) {
      for (int i = 0; i < msize; i++) {
	sheet[x + mx[i]][y + my[i]]++;
      }
    } else {
      for (int i = 0; i < lsize; i++) {
	sheet[x + lx[i]][y + ly[i]]++;
      }
    }
  }
  
  int max_w = 0, count = 0;;
  for (int i = 2; i <= 11; i++) {
    for (int j = 2; j <= 11; j++) {
      max_w = max(max_w, sheet[i][j]);
      if (sheet[i][j] == 0) {
	count++;
      }
    }
  }
  printf("%d\n%d\n", count, max_w);
}