#include <stddef.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
  string s, t;
  while (getline(cin, s)) {
    t.clear();
    for (size_t i = 0; i < s.size(); i++)
      if (s.find("apple", i) == i) {
        t += "peach"; i += 4;
      }
      else if (s.find("peach", i) == i) {
        t += "apple"; i += 4;
      }
      else t += s[i];
    cout << t << endl;
  }
}