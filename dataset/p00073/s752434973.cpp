#include<cmath>
#include<iostream>
using namespace std;

int main() {
  double x,h;
  while(true) {
    cin>>x>>h;
    if(!x) break;
    cout.precision(11);
    cout<<showpoint<<x*x+2*x*sqrt(x*x/4+h*h)<<endl;
  }
}