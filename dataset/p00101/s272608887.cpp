#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  while (n--) {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size() - 6; i++) {
      if (s.size() < 7) break;
      string t = s.substr(i, 7);
      if (t == "Hoshino") {
	s[i] = 'H';
	s[i + 1] = 'o';
	s[i + 2] = 's';
	s[i + 3] = 'h';
	s[i + 4] = 'i';
	s[i + 5] = 'n';
	s[i + 6] = 'a';
      }
    }
    cout << s << endl;
  }
  return 0;
}