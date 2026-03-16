#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int x, y, size;
  int map[10][10] = {0};

  while (~scanf("%d,%d,%d", &x, &y, &size)){
    if ((0 <= x && x <= 9) && (0 <= y && y <= 9)) map[y][x]++;
    switch (size){
      case 1:
        if (0 <= y - 1 && y - 1 <= 9) map[y-1][x]++;
        if (0 <= y + 1 && y + 1 <= 9) map[y+1][x]++;
        if (0 <= x - 1 && x - 1 <= 9) map[y][x-1]++;
        if (0 <= x + 1 && x + 1 <= 9) map[y][x+1]++;
        break;
      case 2:
        if (0 <= y - 1 && y - 1 <= 9) map[y-1][x]++;
        if (0 <= y + 1 && y + 1 <= 9) map[y+1][x]++;
        if (0 <= x - 1 && x - 1 <= 9) map[y][x-1]++;
        if (0 <= x + 1 && x + 1 <= 9) map[y][x+1]++;
        if ((0 <= x - 1 && x - 1 <= 9) && (0 <= y - 1 && y - 1 <= 9)) map[y-1][x-1]++;
        if ((0 <= x - 1 && x - 1 <= 9) && (0 <= y + 1 && y + 1 <= 9)) map[y+1][x-1]++;
        if ((0 <= x + 1 && x + 1 <= 9) && (0 <= y - 1 && y - 1 <= 9)) map[y-1][x+1]++;
        if ((0 <= x + 1 && x + 1 <= 9) && (0 <= y + 1 && y + 1 <= 9)) map[y+1][x+1]++;
        break;
      case 3:
        if (0 <= y - 1 && y - 1 <= 9) map[y-1][x]++;
        if (0 <= y + 1 && y + 1 <= 9) map[y+1][x]++;
        if (0 <= x - 1 && x - 1 <= 9) map[y][x-1]++;
        if (0 <= x + 1 && x + 1 <= 9) map[y][x+1]++;
        if ((0 <= x - 1 && x - 1 <= 9) && (0 <= y - 1 && y - 1 <= 9)) map[y-1][x-1]++;
        if ((0 <= x - 1 && x - 1 <= 9) && (0 <= y + 1 && y + 1 <= 9)) map[y+1][x-1]++;
        if ((0 <= x + 1 && x + 1 <= 9) && (0 <= y - 1 && y - 1 <= 9)) map[y-1][x+1]++;
        if ((0 <= x + 1 && x + 1 <= 9) && (0 <= y + 1 && y + 1 <= 9)) map[y+1][x+1]++; 
        if (0 <= x + 2 && x + 2 <= 9) map[y][x+2]++;
        if (0 <= x - 2 && x - 2 <= 9) map[y][x-2]++;
        if (0 <= y + 2 && y + 2 <= 9) map[y+2][x]++;
        if (0 <= y - 2 && y - 2 <= 9) map[y-2][x]++;
        break;
    }
  }
  int w = 0, max = 0;
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      if (!map[i][j]) w++;
      if (max < map[i][j]) max = map[i][j];
    }
  }
  printf("%d\n%d\n", w, max);

  return (0);
}