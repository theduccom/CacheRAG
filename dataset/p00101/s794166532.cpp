#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;

  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);

    int pos;
    while ((pos = s.find("Hoshino")) != -1) {
      s[pos + 6] = 'a';
    }
    cout << s << endl;
  }
  return 0;
}