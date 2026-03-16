#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(void) {
  
  double num;
  while(cin >> num) {
    cout << setprecision(8) << 3 * num + 390 * num / 81 << endl;
  }

  return 0;
}