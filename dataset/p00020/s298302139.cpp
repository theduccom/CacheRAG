#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
int main()
{
  std::string line;
  while (std::getline(std::cin, line)) {
    std::transform(line.cbegin(), line.cend(), line.begin(), ::toupper);
    std::cout << line << std::endl;
  }
  return 0;
}