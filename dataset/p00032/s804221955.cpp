//48
#include<iostream>

using namespace std;

int main(){
  int cho=0,hishi=0;
  for(int a,b,c;((cin>>a).ignore()>>b).ignore()>>c;){
    hishi+=a==b;
    cho+=c*c==a*a+b*b;
  }
  cout<<cho<<endl<<hishi<<endl;
  return 0;
}