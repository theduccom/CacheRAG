#include<iostream>
#include<complex>
#include<complex>
#include<cmath>
using namespace std;

typedef complex<double> P;

const double eps = 1e-10;

//
//0:a include b
//1:intersected
//2:same
//3:far away
// r1 >= r2
int is_intersected_circle(P a,P b,double r1,double r2){
  double d = abs(a-b);
  if (d<eps && abs(r1-r2)<eps)return 2;
  if  (d+r2 < r1)return 0;//(fabs(r1-r2)<d if dont care a(b) include another
  if (d > r1+r2)return 3;

  
  return 1;
}

main(){
  int op[2][4]={{2,1,100,0},
  {-2,1,100,0},};
  P a,b;
  double r1,r2;
  int te;
  cin>>te;
  while(te--){
    cin>>a.real()>>a.imag()>>r1>>
      b.real()>>b.imag()>>r2;

    if (r1 >= r2)
      cout << op[0][is_intersected_circle(a,b,r1,r2)]<<endl;
    else
      cout << op[1][is_intersected_circle(b,a,r2,r1)]<<endl;
  }
  
}