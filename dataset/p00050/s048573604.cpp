#include<iostream>
#include<string>
using namespace std;

int main(){

  string str;
  int len;

  getline(cin, str);

  len = str.length() - 4;
  for(int i=0; i<len; i++){
    if(str[i] == 'a'){
      if(str[i+1] == 'p' && str[i+2] == 'p' && str[i+3] == 'l' && str[i+4] == 'e'){
        str.replace(i, 5, "peach");
      }
    }
    else if(str[i] == 'p'){
      if(str[i+1] == 'e' && str[i+2] == 'a' && str[i+3] == 'c' && str[i+4] == 'h'){
        str.replace(i, 5, "apple");
      }
    }
  }

  cout << str << endl;

  return 0;

}