#include <iostream>
#include <cstring>
using namespace std;

int main(void){
  while(true){
    string str;
    if(!getline(cin, str)) break;;
    while(true){
      for(int i = 0; i < str.size(); i++){
        if(isalpha(str[i]) && str[i] == 'z'){
          str[i] = 'a';
        }else if(isalpha(str[i])){
          str[i]++;
        }
      }
      if(str.find("that") != string::npos || str.find("this") != string::npos || str.find("the") != string::npos) break;
    }
    cout << str << endl;
  }
  return 0;
}