#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  // ifstream cin("../test.txt");
  char a[20][20];
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      a[i][j] = '0';
    }
  }
  char c;

  vector<string> shape(7);
  shape[0] = "1100110000000000";
  shape[1] = "1000100010001000";
  shape[2] = "1111000000000000";
  shape[3] = "1000100000000000";
  shape[4] = "1100011000000000";
  shape[5] = "1000110001000000";
  shape[6] = "1100100000000000";

  while (cin >> c) {
    a[0][0] = c;
    for (int i = 1; i < 8; i++) {
      cin >> c;
      a[0][i] = c;
    }
    for (int i = 1; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        cin >> c;
        a[i][j] = c;
      }
    }

    // for (int i = 0; i < 8; i++) {
    //   for (int j = 0; j < 8; j++) {
    //     cout << a[i][j];
    //   }
    //   cout << endl;
    // }


    int h,w;
    for (int i = 0; i < 64; i++) {
      if (a[i/8][i%8] == '1') {
        h = i / 8;
        w = i % 8;
        break;
      }
    }

    // cout << h << " " << w << endl;

    for (int s = 0; s < 7; s++) {
      bool flag = true;
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
          if (shape[s][4 * i + j] != a[h + i][w + j])
            flag = false;
        }
      }

      if (flag) {
        cout << (char)('A' + s) << endl;
        break;
      }
    }

  }
}