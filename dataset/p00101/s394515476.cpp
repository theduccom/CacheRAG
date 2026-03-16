#include <iostream>
#include <string>

using std::string;

int main () {
  int n;
  string str;

  std::cin >> n;
  std::cin.ignore();
  
  for (int i = 0; i < n; i++) { 
    std::getline(std::cin, str);

    size_t pos;
    while ((pos = str.find("Hoshino")) != string::npos) {
      str[pos+6] = 'a';
    }
    
    std::cout << str << std::endl;
  }
}