#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  int sur[8][8];
  int x, y;
  string s;

  while (true) {
    bool isGetted = false;
    for (int i = 0; i < 8; i++) {
      getline(cin, s);
      for (int j = 0; j < 8; j++) {
        if (s[j] == '1' && !isGetted) {
          x = j;
          y = i;
          isGetted = true;
        }
        sur[i][j] = s[j] - '0';
      }
    }

    if (x+1 < 8 && y+1 < 8 &&
        sur[y][x+1] && sur[y+1][x] && sur[y+1][x+1])
      cout << "A" << endl;
    else if (y+3 < 8 &&
             sur[y+1][x] && sur[y+2][x] && sur[y+3][x])
      cout << "B" << endl;
    else if (x+3 < 8 &&
             sur[y][x+1] && sur[y][x+2] && sur[y][x+3])
      cout << "C" << endl;
    else if (x-1 >= 0 && y+2 < 8 &&
             sur[y+1][x] && sur[y+1][x-1] && sur[y+2][x-1])
      cout << "D" << endl;
    else if (x+2 < 8 && y+1 < 8 &&
             sur[y][x+1] && sur[y+1][x+1] && sur[y+1][x+2])
      cout << "E" << endl;
    else if (x+1 < 8 && y+2 < 8 &&
             sur[y+1][x] && sur[y+1][x+1] && sur[y+2][x+1])
      cout << "F" << endl;
    else
      cout << "G" << endl;

    if (!getline(cin, s))
      break;
  }
  return 0;
}