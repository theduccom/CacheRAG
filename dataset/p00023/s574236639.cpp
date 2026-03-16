#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  double xa,ya,ra,xb,yb,rb,d;
  cin>>n;
  for(;n>0;n--){
    cin>>xa>>ya>>ra>>xb>>yb>>rb;
    d = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    if(d>ra+rb)
      cout<<0<<endl;
    if(abs(ra-rb)<=d&&d<=ra+rb)
      cout<<1<<endl;
    if(d<ra-rb)
      cout<<2<<endl;
    if(d<rb-ra)
      cout<<-2<<endl;
  }
  return 0;
}