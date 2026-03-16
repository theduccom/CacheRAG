#include<iostream>
#include<complex>
#include<complex>
#include<cmath>
using namespace std;

typedef complex<double> P;

const double eps = 1e-10;

//
//0:a include b
//1:b include a
//2:intersected
//3:same
//4:far away
// r1 >= r2
int is_intersected_circle(P a,P b,double r1,double r2){
  double d = abs(a-b);
  if (d<eps && abs(r1-r2)<eps)return 3;
  if (d+r2 < r1)return 0;
  if (d+r1 < r2)return 1;
  if (d > r1+r2)return 4;
  
  return 2;
}

main(){
  int op[5]={2,-2,1,100,0};
  P a,b;
  double r1,r2;
  int te;
  cin>>te;
  while(te--){
    cin>>a.real()>>a.imag()>>r1>>
      b.real()>>b.imag()>>r2;

      cout << op[is_intersected_circle(a,b,r1,r2)]<<endl;
  }
  
}