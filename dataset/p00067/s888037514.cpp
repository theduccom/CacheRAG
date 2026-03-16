#include <iostream>
#include <cstdio>
using namespace std;

bool isLand[12][12];

bool deleteOneLand(int x, int y)
{
  if (!isLand[y][x]) return false;
  isLand[y][x] = false;
  if (x > 0) deleteOneLand(x - 1, y);
  if (y > 0) deleteOneLand(x, y - 1);
  if (x < 11) deleteOneLand(x + 1, y);
  if (y < 11) deleteOneLand(x, y + 1);
  return true;
}

int main()
{
  int x, y, ans;
  while (!cin.eof())
  {
    ans = 0;
    for (y = 0; y < 12; y++)
    {
      for (x = 0; x < 12; x++)
	isLand[y][x] = getchar() == '1';
      getchar();
    }
    for (y = 0; y < 12; y++)
      for (x = 0; x < 12; x++)
	if (deleteOneLand(x, y)) ans++;
    cout << ans << endl;
    if (getchar() != '\n') break;
  }
  return 0;
}