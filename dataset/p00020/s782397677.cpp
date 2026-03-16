#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;


int main(){
  string s;
  getline(cin,s);
  
  for(int i=0;i<s.size();i++){
    s[i] = toupper(s[i]);
    printf("%c",s[i]);
  }
  cout << endl;
  
}