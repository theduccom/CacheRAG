#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  while (getline(cin, s)) {
    for (int i = 0; i < s.size() - 4; ++i) {
      string sub = s.substr(i, 5);
      if (sub == "apple") {
	s.replace(i, 5, "peach");
      } else if (sub == "peach") {
	s.replace(i, 5, "apple");
      }
    }
    cout << s << endl;
  }
}