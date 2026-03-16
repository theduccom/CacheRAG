#include <iostream>
#include <string>
using namespace std;

class Point{
public:
  int x, y;
  Point(int x = 0, int y = 0) : x(x), y(y) {}
};

int main() {
  static Point blocks[7][4];
  blocks[0][0] = Point(0, 0);
  blocks[0][1] = Point(1, 0);
  blocks[0][2] = Point(0, 1);
  blocks[0][3] = Point(1, 1);
  blocks[1][0] = Point(0, 0);
  blocks[1][1] = Point(0, 1);
  blocks[1][2] = Point(0, 2);
  blocks[1][3] = Point(0, 3);
  blocks[2][0] = Point(0, 0);
  blocks[2][1] = Point(1, 0);
  blocks[2][2] = Point(2, 0);
  blocks[2][3] = Point(3, 0);
  blocks[3][0] = Point(1, 0);
  blocks[3][1] = Point(0, 1);
  blocks[3][2] = Point(1, 1);
  blocks[3][3] = Point(0, 2);
  blocks[4][0] = Point(0, 0);
  blocks[4][1] = Point(1, 0);
  blocks[4][2] = Point(1, 1);
  blocks[4][3] = Point(2, 1);
  blocks[5][0] = Point(0, 0);
  blocks[5][1] = Point(0, 1);
  blocks[5][2] = Point(1, 1);
  blocks[5][3] = Point(1, 2);
  blocks[6][0] = Point(1, 0);
  blocks[6][1] = Point(2, 0);
  blocks[6][2] = Point(0, 1);
  blocks[6][3] = Point(1, 1);

  string data[8];
  while(getline(cin, data[0])) {
    for(int i = 1; i < 8; i++) {
      getline(cin, data[i]);
    }
    getchar();
    for(int i = 0; i < 8; i++) {
      for(int j = 0; j < 8; j++) {
	if(data[i][j] == '1') {
	  for(int n = 0; n < 7; n++) {
	    bool flag = true;
	    int ox = j - blocks[n][0].x;
	    int oy = i - blocks[n][0].y;
	    for(int p = 1; p < 4; p++) {
	      int nx = ox+blocks[n][p].x;
	      int ny = oy+blocks[n][p].y;
	      if(nx < 0 || nx >= 8 || ny < 0 || ny >= 8) {
		flag = false;
		break;
	      }

	      if(data[ny][nx] != '1') {
	        flag = false;
	        break;
	      }
	    }
	    if(flag) {
	      cout << (char)((int)'A'+n) << endl;
	      break;
	    }
	  }
	  i = 8;
	  break;
        }
      }
    }
  }
  return 0;
}