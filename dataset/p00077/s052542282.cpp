#include <string>
#include <iostream>
using namespace std;

int main(void) {
  string s;
  while (cin >> s) {
    string ans;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '@') {
        i++;
        int num = s[i] - '0';        
        i++;
        while (num--) {
          ans += s[i];
        }
      } else {
        ans += s[i];
      }
    }
    cout << ans << endl;
  }

  return 0;
}