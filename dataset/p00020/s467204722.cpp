#include<iostream>
#include<string>
#include <cctype>

using namespace std;

int main(){
  string str;

  getline(cin, str);
  for(string::size_type i=0; i != str.size(); ++i){
    str[i] = toupper(str[i]);
  }
  cout << str << endl;
  return 0;
}