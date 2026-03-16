#include<iostream>
#include<string>
using namespace std;
int main(){
  string s,t,u;
  getline(cin,s);
  t = s;
  u = s;
  for(;;){
    string::size_type pos = s.find("apple");
    if(pos == string::npos) break;
    s[pos] = 'p';s[pos+1] = 'e';s[pos+2] = 'a';s[pos+3] = 'c';s[pos+4] = 'h';
    u[pos] = 'p';u[pos+1] = 'e';u[pos+2] = 'a';u[pos+3] = 'c';u[pos+4] = 'h';
  }
  for(;;){
    string::size_type pos = t.find("peach");
    if(pos == string::npos) break;
    t[pos] = 'a';t[pos+1] = 'p';t[pos+2] = 'p';t[pos+3] = 'l';t[pos+4] = 'e';
    u[pos] = 'a';u[pos+1] = 'p';u[pos+2] = 'p';u[pos+3] = 'l';u[pos+4] = 'e';
  }
  cout <<u<<endl;
  return 0;
}