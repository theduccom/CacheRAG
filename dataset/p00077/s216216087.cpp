#include <iostream>
#include <string>
int main(){
  std::string s;
  while(std::cin>>s){
    if(std::cin.eof())return 0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='@'){
      for(int j=static_cast<int>(s[i+1]-'0');j;j--){
	std::cout<<s[i+2];
      }
      i+=2;
      continue;
    }
    else{std::cout<<s[i];}
  }
  std::cout<<std::endl;
  }
}