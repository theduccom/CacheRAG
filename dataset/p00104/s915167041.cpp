#include<iostream>

void move(int, int);

char tiles[100][100];
bool mem[100][100];

int main()
{
  int H, W;
  while(true)
  {
    std::cin >> H >> W;
    if(!H && !W)
      break;
    for(int i = 0; i < 10000; i++)
      mem[i / 100][i % 100]  = 0;

    for(int i = 0; i < H; i++)
      std::cin >> tiles[i];

    move(0, 0);
  }
  return 0;
}

void move(int x, int y)
{
  if(mem[y][x])
  {
    std::cout << "LOOP" << std::endl;
    return;
  }

  mem[y][x] = true;

  switch(tiles[y][x])
  {
    case '<':
      move(x - 1, y);
      return;
    case '>':
      move(x + 1, y);
      return;
    case '^':
      move(x, y - 1);
      return;
    case 'v':
      move(x, y + 1);
      return;
    case '.':
      std::cout << x << " " << y << std::endl;
      return;
  }
}