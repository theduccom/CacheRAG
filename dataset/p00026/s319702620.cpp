#include <iostream>
#define P_SIZE 10
using namespace std;

int main() {
  int ink1[5][2] = {{0,0},{1,0},{0,1},{-1,0},{0,-1}};
  int ink2[9][2] = {{0,0},{1,0},{0,1},{-1,0},{0,-1},
		    {1,1},{-1,1},{-1,-1},{1,-1}};
  int ink3[13][2] =  {{0,0},{1,0},{0,1},{-1,0},{0,-1},
		      {1,1},{-1,1},{-1,-1},{1,-1},
		      {2,0},{0,2},{-2,0},{0,-2}};

  static int ink_num[3] = {5, 9, 13};
  
  int map[P_SIZE][P_SIZE];
  for(int i = 0; i < P_SIZE; i++) {
    for(int j = 0; j < P_SIZE; j++) {
      map[i][j] = 0;
    }
  }

  int x, y, size;
  while(scanf("%d,%d,%d", &x, &y, &size) != EOF) {
    for(int i = 0; i < ink_num[size-1]; i++) {
      int nx, ny;
      switch(size) {
      case 1:
	nx = x + ink1[i][0];
	ny = y + ink1[i][1];
	break;
      case 2:
	nx = x + ink2[i][0];
	ny = y + ink2[i][1];
	break;
      case 3:
	nx = x + ink3[i][0];
	ny = y + ink3[i][1];
	break;
      }
      if(nx < 0 || nx >= P_SIZE || ny < 0 || ny >= P_SIZE) continue;

      map[ny][nx] += 1;
    }
  }

    int inkMax = 0;
    int space = 0;
    for(int i = 0; i < P_SIZE; i++) {
      for(int j = 0; j < P_SIZE; j++) {
	if(map[i][j] == 0) space++;
	if(map[i][j] > inkMax) inkMax = map[i][j];
      }
    }
    cout << space << endl;
    cout << inkMax << endl;
  return 0;
}