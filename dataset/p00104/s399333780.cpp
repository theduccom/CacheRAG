#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int H, W;
char tile[101][101];

void magi(int y, int x);

int main()
{
  while (scanf("%d%d", &H, &W), W || H){
    for (int i = 0; i < H; i++){
      scanf("%s", tile[i]);
    }
    magi(0, 0);
  }

  return (0);
}

void magi(int y, int x)
{
  if (tile[y][x] == '.'){
    printf("%d %d\n", x, y);
  }
  else if (tile[y][x] == '0'){
    puts("LOOP");
  }

  if (0 <= x + 1 && x + 1 <= W - 1 && tile[y][x] == '>'){
    tile[y][x] = '0';
    magi(y, x + 1);
  }
  if (0 <= x - 1 && x - 1 <= W - 1 && tile[y][x] == '<'){
    tile[y][x] = '0';
    magi(y, x - 1);
  }
  if (0 <= y + 1 && y + 1 <= H + 1 && tile[y][x] == 'v'){
    tile[y][x] = '0';
    magi(y + 1, x);
  }
  if (0 <= y - 1 && y - 1 <= H - 1 && tile[y][x] == '^'){
    tile[y][x] = '0';
    magi(y - 1, x);
  }
}