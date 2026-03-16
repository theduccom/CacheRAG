#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string s;
  while(getline(cin, s)) {
    for (int i=0; i<26; i++) {
      string s2(s);
      for (int j=0; j<s.length(); j++) {
        if (isalpha(s[j]))
          s2[j] = (s[j]-'a'+i) % 26 + 'a';
      }
      if (s2.find("the")!=-1||s2.find("this")!=-1||s2.find("that")!=-1) {
        cout << s2 << endl;
        break;
      }
    }
  }
}