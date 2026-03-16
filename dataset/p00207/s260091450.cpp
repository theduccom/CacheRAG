#include <iostream>
#include <cstdio>

using namespace std;

int field[102][102];
bool visited[102][102];
int w, h;
int xs, ys;
int xg, yg;
int n;
int d_x[] = {1, 0, -1, 0};
int d_y[] = {0, -1, 0, 1};
int sc;

bool search(int y, int x) {
  if (visited[y][x] || field[y][x] == 0 || field[y][x] != sc) {return false;}  
  if (y == yg && x == xg) {
    return true;
  }
  visited[y][x] = true;
  for (int i = 0; i < 4; i++) {
    if (search(y + d_y[i], x + d_x[i])) {return true;}
  }
  return false;
}

int main()
{
  while (true) {
    scanf("%d %d ", &w, &h);
    if (w == 0 && h == 0) {
      break;
    }
    scanf("%d %d ", &xs, &ys);
    scanf("%d %d ", &xg, &yg);
    scanf("%d ", &n);
    for (int i = 0; i < 102; i++) {
      fill(field[i], &field[i][102], 0);
      fill(visited[i], &visited[i][102], false);
    }
    for (int i = 0; i < n; i++) {
      int c, d, x, y;
      scanf("%d %d %d %d ", &c, &d, &x, &y);
      for (int i = 0; i < 2; i++) {
	for (int j = 0; j < 4; j++) {
	  if (d == 0) {
	    field[y + i][x + j] = c;
	  } else {
	    field[y + j][x + i] = c;
	  }
	}
      }
    }
    /*for (int i = 1; i <= h; i++) {
      for (int j = 1; j <= w; j++) {
	printf("%d ", field[i][j]);
      }
      printf("\n");
      }*/
    sc = field[ys][xs];
    if (search(ys, xs)) {cout << "OK" << endl;}
    else {cout << "NG" << endl;}
  }
  return 0;
}