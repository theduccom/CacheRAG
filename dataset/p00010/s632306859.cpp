#include <iostream>
#include <complex>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
typedef complex<double> P;

double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}
P outcircle(P a,P b,P c){
  return (norm(b-c)*(norm(c-a)+norm(a-b)-norm(b-c))*a+
	  norm(c-a)*(norm(a-b)+norm(b-c)-norm(c-a))*b+
	  norm(a-b)*(norm(b-c)+norm(c-a)-norm(a-b))*c)/(P)(4*cross(b-a,c-a)*cross(b-a,c-a));
}

int main(){
  int n;
  double x1,y1,x2,y2,x3,y3;
  P a,b,c;
  cin>>n;
  for(;n>0;n--){
    cin >>x1 >>y1 >>x2 >>y2 >>x3 >>y3;
    P a=P(x1,y1);
    P b=P(x2,y2);
    P c=P(x3,y3);
    P q = outcircle(a,b,c);
    printf("%.3f %.3f %.3f\n",q.real(),q.imag(),abs(a-q));
  }
  return 0;
}