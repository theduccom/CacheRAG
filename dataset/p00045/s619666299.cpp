#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
  int s=0,a=0,i=0,n,m;
  string l;
  while(cin>>l){
    n = atoi(l.substr(0,l.find(",")).c_str());
    m = atoi(l.substr(l.find(",")+1).c_str());
    s+=n*m;
    a+=m;
    i++;
  }
  cout<<s<<endl<<(a+(i-1))/i<<endl;
  return 0;
}