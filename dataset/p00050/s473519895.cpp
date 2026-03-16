#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string s;
  const string t[] = {"apple", "peach"};
  while(getline(cin, s)) {
    for(int i = 0; i < s.size(); ++i) {
      bool flag = false;
      for(int j = 0; j < 2; ++j) {
        if(s.substr(i, t[j].size()) == t[j]) {
          flag = true;
          cout << t[1-j];
          i += t[j].size()-1;
          break;
        }
      }
      if(!flag) cout << s[i];
    }
    cout << endl;
  }
  return 0;
}