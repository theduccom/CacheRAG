#include <iostream>
using namespace std;

int main(){
  string str;
  int i;
  int gap;

  gap='a'-'A';
  std::getline(std::cin, str);
  for(i=0; i<str.size(); i++){
    if(str[i]!=' ' && str[i]!='.') str[i]-=gap;
  }
  cout<<str<<endl;

  return 0;
}