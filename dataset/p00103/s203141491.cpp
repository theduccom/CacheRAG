#include <iostream>

using namespace std;

int main () {
  int n;
  cin >> n;

  while (n--) {
    bool base[3] = {false, false, false};
    int out = 0;
    int point = 0;
    char c[8];

    while (out < 3) {
      cin >> c;

      if (c[0] == 'O')  out++;
      if (c[0] == 'H')
        if (c[1] == 'I') {
          for (int i = 0; i < 3; i++) {
            if (!base[i]) {
              base[i] = true;
              break;
            } else if (i == 2) {
              point++;
            }
          }
        } else {
          for (auto& b : base) {
            if (b) {
              point++;
              b = false;
            }
          }
          point++;
        }
    }
    cout << point << endl;
  }
}