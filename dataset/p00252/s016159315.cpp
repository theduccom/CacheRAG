//32
#include<iostream>

using namespace std;

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  cout<<((a&b||c)?"Open":"Close")<<endl;
  return 0;
}