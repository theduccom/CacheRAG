#include<iostream>
#include<string>

/*void shift(std::string str){
  for(int i=0;i<str.size();i++){
    if('a'<=str[i]&&str[i]<='z'){
      str[i] += 1;
      if(str[i]==123){
        str[i]='a';
      }
    }
  }
}*/

int main(){
  std::string str;
  int flag;

  while(std::getline(std::cin, str)){
    //str[0] += 1;
    //std::cout << str << std::endl;
    flag = 1;
    while(flag){
      //shift(str);
      //std::cout << str << std::endl;
      for(int i=0;i<str.size();i++){
        if('a'<=str[i]&&str[i]<='z'){
          str[i] += 1;
          if(str[i]==123){
            str[i]='a';
          }
        }
      }

      if(!(str.find("this")==std::string::npos)){
        flag = 0;
      }
      if(!(str.find("that")==std::string::npos)){
        flag = 0;
      }
      if(!(str.find("the")==std::string::npos)){
        flag = 0;
      }
    }
    std::cout << str << std::endl;
  }
}