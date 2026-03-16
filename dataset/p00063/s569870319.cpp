#include <iostream>
#include <string>
using namespace std;

int main() {
  int ans = 0;

  string s;
  while(cin >> s) {
    int len = s.size();
    bool b = true;
    for(int i = 0; i < len/2 && b; i++) {
      if(s[i] != s[len-i-1]) b = false;
    }

    ans += b;
  }
  
  cout << ans << endl;
}