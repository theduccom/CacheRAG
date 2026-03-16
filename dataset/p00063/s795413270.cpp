#include <iostream>
#include <string>
using namespace std;

string str;
int ans;

int main() {
  while (cin >> str) {
    bool check = true;
    for (int i = 0; i < (int)str.size() / 2; ++i) {
      if (str[i] != str[str.size() - 1 - i]) {
        check = false;
        break;
      }
    }
    if (check) ans++;
  }
  cout << ans << endl;
}