#include <iostream>
#include <string>

using namespace std;

int main(void){
  int line_length;
  cin>>line_length;
  string str;
  std::getline(std::cin, str);

  for(int i=0;i<line_length;++i){
    string input;
    getline(cin,input);
    std::string::size_type pos;
    while(( pos = input.find("Hoshino")) != std::string::npos){
      input.replace(pos, 7, "Hoshina");
    }
    cout << input<<endl;
  }
  return 0;
}

