#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

int main(){
  int n;
  cin >> n;
  while(n--){
    complex<double> c1,c2;
    double r1,r2,dist;
    cin >> c1.real() >> c1.imag() >> r1 >> c2.real() >> c2.imag() >> r2;
    dist = abs(c1-c2);
    if(dist>r1+r2){
      cout << 0 << endl;
    }else if(dist>=abs(r1-r2)){
      cout << 1 << endl;
    }else if(r1>r2){
      cout << 2 << endl;
    }else{
      cout << -2 << endl;
    }
  }
}