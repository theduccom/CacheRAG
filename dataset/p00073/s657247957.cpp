#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  double x,h;
  while(cin>>x>>h&&(x||h)){
    cout<<fixed<<setprecision(6)<<x*x+2*x*sqrt(h*h+(x*x)/4)<<endl;
  }
  return 0;
}