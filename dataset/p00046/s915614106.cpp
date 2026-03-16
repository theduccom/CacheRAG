#include<iostream>
using namespace std;
main(){
  double h,l,d;

  cin>>h;
  cin>>d;
  if(d>h){l=h;h=d;}
  else l=d;
  while (cin >> d){
    if(d>h)h=d;
    else if(d<l)l=d;
  }
  cout << h-l << endl;
}