#include <iostream>

using namespace std;

int main(){
  int a,b,c;cin>>a>>b>>c;
  string str="Close";
  if((a==1&&b==1) || c==1) str="Open";
  cout<<str<<endl;
}
