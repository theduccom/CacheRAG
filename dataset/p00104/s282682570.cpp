#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  while (true) {
    int h, w;
    cin >> h >> w;
    if (h == 0 && w == 0) return 0;
    char a[h][w];
    for (int i = 0; i < h; i++)
      scanf("%s", a[i]);

    int x, y, count;
    x = y = 0;
    count = 0;
    while (true) {
      if (count > 10000) {
	cout << "LOOP" << endl;
	goto loop_end;
      }
      if (a[y][x] == '>') x++;
      else if (a[y][x] == '<') x--;
      else if (a[y][x] == '^') y--;
      else if (a[y][x] == 'v') y++;
      else break;
      count++;
    }
    cout << x << ' ' << y << endl;
  loop_end: ;
  }
}