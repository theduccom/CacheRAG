#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
  string line;
  const string astr("apple"), pstr("peach");
  size_t a, p;
  while (getline(cin, line)) {
    a = line.find(astr);
    p = line.find(pstr);
    while (a != string::npos || p != string::npos) {
      if (p == string::npos || a < p) {
        line.replace(a, 5, pstr);
        a = line.find(astr, a+5);
      } else {
        line.replace(p, 5, astr);
        p = line.find(pstr, p+5);
      }
    }
    cout << line << endl;
  }
  return 0;
}