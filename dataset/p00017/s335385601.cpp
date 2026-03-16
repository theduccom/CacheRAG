#include <iostream>
#include <string>

using namespace std;

int main() { 
  string input_str;

  while (getline(cin, input_str)) {
    for (int shift = 0; shift < 26; shift++) {
      for (int str_i = 0; str_i < input_str.size(); str_i++) {
        if (input_str[str_i] >= 'a' && input_str[str_i] < 'z')
          input_str[str_i] ++;
        else if (input_str[str_i] == 'z')
          input_str[str_i] = 'a';
      }
      if (input_str.find("the") != string::npos || input_str.find("this") != string::npos || input_str.find("that") != string::npos)
        break;
    }
    cout << input_str << endl;
  }

  return 0;
}