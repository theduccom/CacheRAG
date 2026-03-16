#include <iostream>

using namespace std;

int main() {
  int l[10], v1, v2;
  while (!cin.eof()) {
    int len = 0;
    for (int i = 0; i < 10; i++) {
      cin >> l[i];
      cin.ignore();
      len += l[i];
      if (cin.eof()) return 0;
    }
    cin >> v1; cin.ignore();
    cin >> v2;
    double dist = (double)len * v1 / (v1 + v2);
    int i = 0;
    for (int s = 0; s < dist && i < 10; s += l[i], i++) {}
    cout << i << endl;
  }

  return 0;
}