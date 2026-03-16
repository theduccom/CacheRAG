#include <iostream>
#include <string>
using namespace std;

char get_type(string d[]) {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (d[i][j] == '1') {
        if (i + 3 < 8 && d[i + 3][j] == '1') return 'B';
        if (j + 3 < 8 && d[i][j + 3] == '1') return 'C';
        if (i + 2 < 8 && j - 1 >= 0 && d[i + 2][j - 1] == '1') return 'D';
        if (i + 2 < 8 && j + 1 < 8 && d[i + 2][j + 1] == '1') return 'F';
        if (i + 1 < 8 && j + 2 && d[i + 1][j + 2] == '1') return 'E';
        if (i + 1 < 8 && j + 1 && d[i + 1][j + 1] == '1') return 'A';
        return 'G';
      }
    }
  }
  return '-';
}

int main() {
  string d[8];
  while (getline(cin, d[0])) {
    for (int i = 1; i < 8; i++) {
      getline(cin, d[i]);
    }
    cout << get_type(d) << endl;
    getline(cin, d[0]);
  }
}
