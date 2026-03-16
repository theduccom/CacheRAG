#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double a,b,c,r,n;
  while(cin >> a >> b >> c, a+b+c){
    cin >> n;
    while(n--){
    cin >> r;
    if(sqrt(a*a + b*b) < 2*r ||
       sqrt(c*c + b*b) < 2*r ||
       sqrt(a*a + c*c) < 2*r)cout << "OK" << endl;
    else cout << "NA" << endl;
    }
  }
  return 0;
}