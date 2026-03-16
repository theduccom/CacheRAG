#include <algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;

static int paper[10][10];

void drop_ink(int x, int y, int size) {
  switch (size) {
    case 3:
      if (y > 1) { ++paper[y-2][x]; }
      if (x > 1) { ++paper[y][x-2]; }
      if (x < 8) { ++paper[y][x+2]; }
      if (y < 8) { ++paper[y+2][x]; }
      // Fall through.
    case 2:
      if (y > 0 && x > 0) { ++paper[y-1][x-1]; }
      if (y > 0 && x < 9) { ++paper[y-1][x+1]; }
      if (y < 9 && x > 0) { ++paper[y+1][x-1]; }
      if (y < 9 && x < 9) { ++paper[y+1][x+1]; }
      // Fall through.
    case 1:
      if (y > 0) { ++paper[y-1][x]; }
      if (x > 0) { ++paper[y][x-1]; }
      ++paper[y][x];
      if (x < 9) { ++paper[y][x+1]; }
      if (y < 9) { ++paper[y+1][x]; }
      break;
  }
}

int main() {
  char *line = NULL;
  size_t buffer_size = 0;
  while (getline(&line, &buffer_size, stdin) > 0) {
    int x, y, size;
    sscanf(line, "%d,%d,%d", &x, &y, &size);
    drop_ink(x, y, size);
  }
  free(line);

  int num_white_cells = 0;
  int deepest_cell = 0;
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      if (paper[i][j] == 0) { ++num_white_cells; }
      else { deepest_cell = max(deepest_cell, paper[i][j]); }
    }
  }
  printf("%d\n%d\n", num_white_cells, deepest_cell);

  return 0;
}