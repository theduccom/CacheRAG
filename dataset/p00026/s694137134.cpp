#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int dens[10][10];
void sink(int x, int y) {
  if (0 <= x && x < 10 && 0 <= y && y < 10) {
    dens[y][x]++;
  }
}

int main() {
  string line;
  while (getline(cin, line)) {
    int x, y, size;
    sscanf(line.c_str(), "%d,%d,%d", &x, &y, &size);
    if (size == 1) {
      sink(x+0,y+0);
      sink(x+1,y+0);
      sink(x-1,y+0);
      sink(x+0,y+1);
      sink(x+0,y-1);
    } else if (size == 2) {
      sink(x+0,y+0);
      sink(x+1,y+0);
      sink(x-1,y+0);
      sink(x+0,y+1);
      sink(x+0,y-1);
      sink(x+1,y+1);
      sink(x-1,y+1);
      sink(x+1,y-1);
      sink(x-1,y-1);
    } else if (size == 3) {
      sink(x+0,y+0);
      sink(x+1,y+0);
      sink(x-1,y+0);
      sink(x+0,y+1);
      sink(x+0,y-1);
      sink(x+1,y+1);
      sink(x-1,y+1);
      sink(x+1,y-1);
      sink(x-1,y-1);
      sink(x+2,y+0);
      sink(x-2,y+0);
      sink(x+0,y+2);
      sink(x+0,y-2);
    }
  }
  int m = 0;
  int count = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (dens[i][j] == 0) count++;
      m = max(m, dens[i][j]);
    }
  }
  cout << count << endl;
  cout << m << endl;
  return 0;
}