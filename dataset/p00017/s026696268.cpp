#include <iostream>
#include <utility>
using namespace std;

int main() {
  string str;
  while(getline(cin,str)){
    for(int i = 0;i < 26;i++){
      for(int i = 0;i <str.size();i++){
        if(isalpha(str[i]))
          str[i] = (str[i]=='z')? 'a' : str[i] + 1;
      }
      if(str.find("the") !=string::npos||str.find("that") !=string::npos||
         str.find("this") !=string::npos){
        cout <<str<<endl;
        break;
      }
    }
  }
}