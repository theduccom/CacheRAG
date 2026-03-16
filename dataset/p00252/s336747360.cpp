#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <cstring>
#include <fstream>
#include <numeric>
#include <algorithm>

using namespace std;

int main(int argc, char **argv) {
  int temp, b;
  for (int i = 0; i < 3; i++) {
    b <<= 1;
    cin >> temp;
    b += temp;
  }

  if (b % 2 || b == 6)
    cout << "Open" << endl;
  else
    cout << "Close" << endl;
  return 0;
}