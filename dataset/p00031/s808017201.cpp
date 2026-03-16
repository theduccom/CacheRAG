#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  int w = 0;
  ostringstream oss;
  while(cin >> w, w) {
    for (int i = 0; i < 32; i++) {
      if (w & (1<<i)) {
        oss << (1<<i);
        oss << " ";
      }
    }
    string out = oss.str();
    cout << out.substr(0, out.length() - 1) << endl;
    oss.str("");
    w = 0;
  }
}