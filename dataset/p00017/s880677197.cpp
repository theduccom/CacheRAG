#include <iostream>
#include <cstdio>

using namespace std;

char shift(const char c, int shift) {
  int result = c + shift;
  if (result > 'z') result -= 26;
  return result;
}

int main() {
  string str;
  while (getline(cin, str)) {
    for (int i = 0; i < 26; i++) {
      string decoded = str;
      for (unsigned int j = 0; j < str.size(); j++) {
        if ('a' <= str[j] && str[j] <= 'z') {
          decoded[j] = shift(str[j], i);
        }
      }
      if (decoded.find("the") != string::npos ||
          decoded.find("this") != string::npos ||
          decoded.find("that") != string::npos) {
        cout << decoded << endl;
        break;
      }
    }
  }


  return 0;
}