#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void) {
  string s, t;
  int count = 0;
  while (cin >> s) {
    t = s;
    reverse(t.begin(), t.end());
    if (s == t) {
      count++;
    }
  }
  cout << count << endl;
  
  return 0;
}