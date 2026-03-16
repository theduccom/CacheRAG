#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string decStr(string str, int n) {
  for(int i = 0; i < str.length(); i++) {
    if(!isalpha(str[i])) continue;
    str[i] = (char)(  ((int)str[i]-(int)'a'+n)%26  + (int)'a'  );
  }
  return str;
}

int main(void) {
  string str;

  while(getline(cin, str)) {
    string ans;
    for(int i = 0; i < 26; i++) {
      ans = decStr(str, i);
      if(ans.find("the") != string::npos) break;
      if(ans.find("this") != string::npos) break;
      if(ans.find("that") != string::npos) break;
    }
    cout << ans << endl;
  }
  return 0;
}