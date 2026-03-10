#include <iostream>
using namespace std;

int main() {
  for (int n = 1; n <= 9; ++n) {
    for (int i = 1; i <= 9; ++i) {
      cout << n << "x" << i << "=" << n * i << endl;
    }
  }
  return 0;
}

