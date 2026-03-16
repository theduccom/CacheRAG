#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cin>>n;
  double xa,ya,ra,xb,yb,rb;
  while(cin>>xa>>ya>>ra>>xb>>yb>>rb){
    double r;
    r = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    if(r+rb<ra) cout<<"2"<<endl;
    else if(r+ra<rb) cout<<"-2"<<endl;
    else if(r>ra+rb) cout<<"0"<<endl;
    else cout<<"1"<<endl;
  }
  return 0;
}