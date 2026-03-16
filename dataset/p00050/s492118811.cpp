//04
#include<iostream>
#include<string>

using namespace std;

int main(){
  string s;
  char c;
  while(cin.get(c)){
    s+=c;
    if(s=="apple"){
      s="peach";
    }else if(s=="peach"){
      s="apple";
    }
    if(s.size()>=5){
      cout<<s[0];
      s.erase(0,1);
    }
  }
  cout<<s;
  return 0;
}