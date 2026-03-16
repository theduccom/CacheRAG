#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  getline(cin,s);
  string a;
  for(string::iterator it=s.begin();it!=s.end();it++){
    if(*it==' '||*it=='.'){
      a.push_back(*it);
      continue;
    }
    a.push_back((char)(*it+'A'-'a'));
  }
  cout<<a<<endl;
  return 0;
}