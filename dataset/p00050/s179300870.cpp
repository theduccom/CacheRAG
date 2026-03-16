#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  getline(cin,s);
  int j=0;
  j=min(s.find("apple",j),s.find("peach",j));
  while(j!=string::npos){
    if(s.substr(j,5)=="apple") s.replace(j,5,"peach");
    else s.replace(j,5,"apple");
    j=min(s.find("apple",j+1),s.find("peach",j+1));
  }
  cout<<s<<endl;
  return 0;
}