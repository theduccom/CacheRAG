#include<bits//stdc++.h>
using namespace std;
int main(){
  double x,h;
  while(cin >> x>> h,x,h){
      double hh = sqrt(x*x/4+h*h);
      cout << fixed << setprecision(10)<<x*x + x*hh*2<<endl;
  }
}
