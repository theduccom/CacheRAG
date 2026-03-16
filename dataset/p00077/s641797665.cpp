#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  int n;
  while(cin>>s){
    for(string::iterator it=s.begin();it!=s.end();++it){
      n=1;
      if(*it=='@'){
	++it;
	n=*it-'0';
	++it;
      }
      while(n--) cout<<*it;
    }
    cout<<endl;
  }
  return 0;
}