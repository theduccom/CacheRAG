#include <stdio.h>

static int ink[10][10];

int drop(int x, int y)
{
  if ((0 <= x) && (x <= 9) && (0 <= y) && (y <= 9)) {
    ++ink[x][y];
    return 1;
  } else {
    return 0;
  }
}

int white(void)
{
  int count = 0;
  int i,j;
  for (i=0; i<10; ++i) {
    for (j=0; j<10; ++j) {
      if (ink[i][j] == 0) {
        ++count;
      }
    }
  }
  return count;
}

int depth(void)
{
  int max = 0;
  int i,j;
  for (i=0; i<10; ++i) {
    for (j=0; j<10; ++j) {
      if (max < ink[i][j]) {
        max = ink[i][j];
      }
    }
  }
  return max;
}

int main(void)
{
  int i,j;
  for (i=0; i<10; ++i) {
    for (j=0; j<10; ++j) {
      ink[i][j] = 0;
    }
  }
  
  int x,y,size;
  while (scanf("%d,%d,%d", &x, &y, &size) != EOF) {
    drop(x,y);
    drop(x+1,y);
    drop(x,y+1);
    drop(x-1,y);
    drop(x,y-1);
    if (size > 1) {
      drop(x+1,y+1);
      drop(x-1,y+1);
      drop(x-1,y-1);
      drop(x+1,y-1);
    }
    if (size == 3) {
      drop(x+2,y);
      drop(x,y+2);
      drop(x-2,y);
      drop(x,y-2);
    }
  }

  printf("%d\n", white());
  printf("%d\n", depth());

  return 0;
}