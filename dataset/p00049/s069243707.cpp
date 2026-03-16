#include <iostream>
#include <string>
using namespace std;

int main(){
  string n;
  int s,l[4]={0};
  while(cin>>n){
    s=n.size();
    if(n[s-1]=='O')l[0]++;
    else if(n[s-1]=='A')l[1]++;
    else if(n[s-1]=='B'&&n[s-2]=='A')l[2]++;
    else if(n[s-1]=='B')l[3]++;
  }
  cout<<l[1]<<endl<<l[3]<<endl<<l[2]<<endl<<l[0]<<endl;
  return 0;
}