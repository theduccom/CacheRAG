#include<iostream>
#include<string>
using namespace std;
char Toupper(char c) {
  if(int('a')<=int(c) && int('z')>=(int)c)
    return (char)toupper(c);
  return c;
}
int main() {
  string s;
  getline(cin,s);
  string tmp="";
    for(int i=0;i<(int)s.size();i++) 
      tmp+=Toupper(s[i]);
    cout<<tmp<<endl;
  return 0;
}
