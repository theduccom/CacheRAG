
#include <iostream>
#include <cmath>
#include <complex>
#include <cstdio>
using namespace std;

int main(){
  int n=0;
  double x,y;
  complex<double> v[20];
  while(scanf("%lf,%lf",&x,&y)>0){
    v[n]=complex<double>(x,y);
    n++;
  }

  double s=0.0;
  for(int i=1;(i+1)<n;i++){
    s+=abs((conj(v[i]-v[0])*(v[i+1]-v[0])).imag())/2.0;
  }

  cout << s << endl;

  return 0;
}