#include <iostream>

using namespace std;

char p[8][9];

bool m(int i, int j) {
  return 0 <= i && i < 8 && 0 <= j && j < 8 && p[i][j] == '1';
}

int main() {
  while (cin >> p[0], !cin.eof()) {
    for (int i = 1; i < 8; i++)
      cin >> p[i];
    for (int i = 0; i < 8; i++)
      for (int j = 0; j < 8; j++)
        if (m(i, j)) {
          if (m(i, j+1) && m(i+1, j) && m(i+1, j+1))
            cout << 'A' << endl;
          else if (m(i+1, j) && m(i+2, j) && m(i+3, j))
            cout << 'B' << endl;
          else if (m(i, j+1) && m(i, j+2) && m(i, j+3))
            cout << 'C' << endl;
          else if (m(i+1, j) && m(i+1, j-1) && m(i+2, j-1))
            cout << 'D' << endl;
          else if (m(i, j+1) && m(i+1, j+1) && m(i+1, j+2))
            cout << 'E' << endl;
          else if (m(i+1, j) && m(i+1, j+1) && m(i+2, j+1))
            cout << 'F' << endl;
          else
            cout << 'G' << endl;
          goto epilogue;
        }
epilogue:;
  }
}