#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  string input_str;

  getline(cin, input_str);

  for (int input_i = 0; input_i < input_str.size(); input_i++)
    if (input_str[input_i] >= 'a' && input_str[input_i] <= 'z')
      input_str[input_i] = toupper(input_str[input_i]); 

  cout << input_str << endl;

  return 0;
}