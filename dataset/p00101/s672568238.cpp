#include <iostream>
#include <string>

int main()
{
  int n;
  std::cin >> n;
  std::cin.ignore();
  
  for (int i = 0; i < n; ++i) {
    std::string str;
    std::getline(std::cin, str);
    
    auto pos = str.find("Hoshino", 0, 7);
    while (pos != std::string::npos) {
      str.replace(pos, 7, "Hoshina", 7);
      pos = str.find("Hoshino", pos, 7);
    }

    std::cout << str.c_str() << std::endl;
  }

  return 0;
}