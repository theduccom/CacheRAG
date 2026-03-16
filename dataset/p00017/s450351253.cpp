#include <cstdio>
#include <string>
using namespace std;

char buf[1000];
string enc, ans;

string decrypt(string s, int k) {
  string ret = "";
  for (int i=0; i<s.size(); i++) {
    char c = s[i];
    if ('a' <= c && c <= 'z') {
      ret += ('a' + ((c-'a')+k)%26);
    } else {
      ret += c;
    }
  }
  return ret;
}

int main() {
  while (1) {
    if (fgets(buf, 100, stdin) == NULL) break;
    enc = buf;
    for (int i=0;i<26;i++) {
      ans = decrypt(enc, i);
      if (ans.find("the") != string::npos) break;
      if (ans.find("this") != string::npos) break;
      if (ans.find("that") != string::npos) break;
    }

    printf("%s", ans.c_str());
  }
}