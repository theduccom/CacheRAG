#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  char b[7][3][2] = {
    {{0,1},{1,0},{1,1}},
    {{1,0},{2,0},{3,0}},
    {{0,1},{0,2},{0,3}},
    {{1,-1},{1,0},{2,-1}},
    {{0,1},{1,1},{1,2}},
    {{1,0},{1,1},{2,1}},
    {{0,1},{1,-1},{1,0}},
  };
  bool a[8][8],flg;
  int r,c,nr,nc;

  while (1) {
    for (int i=0; i<8; i++) {
      cin >> str;
      for (int j=0; j<8; j++) {
        char c = str.at(j);
        a[i][j] = (c=='0') ? false : true;
      }
    }
    if (!cin) break;

    flg = false;
    for (int i=0; i<8; i++) {
      for (int j=0; j<8; j++) {
        if (a[i][j]) {
          r = i;
          c = j;
          flg = true;
          break;
        }
      }
      if (flg) break;
    }

    for (int i=0; i<7; i++) {
      int j;
      for (j=0; j<3; j++) {
        nr = r + b[i][j][0];
        nc = c + b[i][j][1];
        if (nr<0||nr>=8||nc<0||nc>=8) break;
        if (!a[nr][nc]) break;
      }
      if (j == 3) {
        cout << (char)('A'+i) << endl;
        break;
      }
    }
  }

  return 0;
}