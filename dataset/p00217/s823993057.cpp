#include <iostream>

using namespace std;

int main() {
  int n, p, d1, d2, best_p;
  while (true) {
    int longest = -1;
    cin >> n;
    if (n == 0) {
      return 0;
    }
    for (int i = 0; i < n; ++i) {
      cin >> p >> d1 >> d2;
      if (d1 + d2 > longest) {
        longest = d1 + d2;
        best_p = p;
      }
    }
    cout << best_p << " " << longest << endl;
  }
}