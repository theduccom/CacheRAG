#include <iostream>
#include <string>

int main(void)
{
  std::string str;

  std::getline(std::cin, str);

  for (int i = 0; i < str.length(); i++) {
    if (str.at(i) >= 'a' && str.at(i) <= 'z') {
      str.at(i) = str.at(i) - 'a' + 'A';
    }
  }

  std::cout << str << std::endl;

  return 0;
}