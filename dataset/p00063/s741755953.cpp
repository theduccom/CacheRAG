#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string s,g;
  int k=0;
  while(cin>>s){
    g=s;
    reverse(s.begin() , s.end() );
    if(g==s)k++;
  }
  cout<<k<<endl;
  return 0;
}