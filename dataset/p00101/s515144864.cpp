#include <iostream>
#include <string>
 
int main(void) {
  int n;
  std::string str;
  std::string::size_type id;
   
  std::cin >> n;
  std::cin.ignore();
  for(int i=0; i<n; i++) {
    getline(std::cin, str);
    while((id = str.find("Hoshino")) != std::string::npos) {
        str[id+6] = 'a';
    }
    std::cout << str << std::endl;
  }
  return 0;
}