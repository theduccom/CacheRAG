#include<iostream>
#include<cmath>
using namespace std;

const double EPS = 1e-9;

int main() {
  int n;
  double xa,ya,ra,xb,yb,rb;
  cin>>n;
  while(n--) {
    cin>>xa>>ya>>ra>>xb>>yb>>rb;
    double dist = sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
    if(dist > ra+rb) {
      cout<<0<<endl;
    }else if(dist+ra < rb) {
      cout<<-2<<endl;
    }else if(dist+rb < ra) {
      cout<<2<<endl;
    }else{
      cout<<1<<endl;
    }
  }
}