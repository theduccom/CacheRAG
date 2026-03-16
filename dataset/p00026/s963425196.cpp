#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int q[10][10] = {};
int dx[]= {0, 1, 0, -1, 0, 1, 1, -1, -1, 2, 0, -2, 0}, dy[] = {0, 0, 1, 0, -1, 1, -1, 1, -1, 0, 2, 0, -2};

bool is_in_field(int x, int y){
  return ((x >= 0 && x <= 9) && (y >= 0 && y <= 9));
}

void mark( int x, int y, int size,  int i) {
  
  if(is_in_field(x + dx[i], y + dy[i])) {
    q[x + dx[i]][y + dy[i]]++;
  }
  if(i != (size) * 4) mark(x, y, size, i + 1);
}


int main(){
  int x, y, size, max = 0, count = 0;
  while(~scanf("%d,%d,%d", &x, &y, &size)) {
    mark(x, y, size, 0);
  }
  for(x = 0; x < 10; x++)
    for(y = 0; y < 10; y++) {
      if(q[x][y] == 0) count++;
      else if(q[x][y] > max) max = q[x][y];
    }
  cout << count << endl << max <<endl;
}