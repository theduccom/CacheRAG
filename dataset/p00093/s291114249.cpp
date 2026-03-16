#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
  int begin, end;
  bool tmp = true;
  while (true) {
    cin >> begin >> end;
    if (begin == 0 && end == 0) break;
    if (!tmp) cout << endl;
    if (tmp) tmp = false;

    bool flag = true;
    for (int i = begin; i <= end; i += 1) {
      if (i % 400 == 0) {
        flag = false;
        cout << i << endl;
        continue;
      }
      if (i % 4 == 0 && i % 100 != 0) {
        flag = false;
        cout << i << endl;
      }
    }
    if (flag) {
      cout << "NA" << endl;
    }
  }
  return 0;
}