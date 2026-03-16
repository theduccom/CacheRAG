#include <iostream>

using namespace std;

int img[8][8];

int checker(int i, int j) {
  if (0 <= i && i < 8 && 0 <= j && j < 8) {
    return img[i][j];
  } else {
    return 0;
  }
}

int main() {
  while (!cin.eof()) {
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        if (cin.eof()) return 0;
        char c;
        cin >> c;
        img[i][j] = c - '0';
      }
    }
    bool flag = false;
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        if (checker(i, j)) {
          if (checker(i,j+1) && checker(i+1,j) && checker(i+1,j+1)) {
            cout << 'A' << endl;
          } else if (checker(i+1,j) && checker(i+2,j) && checker(i+3,j)) {
            cout << 'B' << endl;
          } else if (checker(i,j+1) && checker(i,j+2) && checker(i,j+3)) {
            cout << 'C' << endl;
          } else if (checker(i+1,j) && checker(i+1,j-1) && checker(i+2,j-1)) {
            cout << 'D' << endl;
          } else if (checker(i,j+1) && checker(i+1,j+1) && checker(i+1,j+2)) {
            cout << 'E' << endl;
          } else if (checker(i+1,j) && checker(i+1,j+1) && checker(i+2,j+1)) {
            cout << 'F' << endl;
          } else if (checker(i,j+1) && checker(i+1,j) && checker(i+1,j-1)) {
            cout << 'G' << endl;
          } 
          flag = true;
          break;
        }
      }
      if (flag) break;
    }
  }


  return 0;
}