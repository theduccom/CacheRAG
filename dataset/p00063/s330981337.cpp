#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string s,r;
  int l,n;
  n=0;
  while(cin>>s){
    l=s.size();
    r=s.substr(l/2+l%2,l/2);
    reverse(r.begin(),r.end());
    if(s.substr(0,l/2)==r) n++;
  }
  cout<<n<<endl;
  return 0;
}