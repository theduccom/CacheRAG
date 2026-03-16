#include<iostream>
#include<vector>
#include<complex>
#define EPS 1e-10
using namespace std;    

typedef complex<double> P;

double cross(P a, P b){
  return (a.real()*b.imag() - a.imag()*b.real());
}

int main()
{
  int i,j;
  int n;
  P point[3],ans;

  cin >> n;
  for(i=0;i<n;i++){

    for(j=0;j<3;j++){
      cin >> point[j].real() >> point[j].imag();
    }

    P p01 = point[0] + point[1];
    P p12 = point[1] + point[2];
    P h01 = P(p01.real()/2 , p01.imag()/2);
    P h12 = P(p12.real()/2 , p12.imag()/2);
    P n1 = (point[0] - h01) * P(0,1) + h01;
    P n2 = (point[1] - h12) * P(0,1) + h12;

    ans = n1 + (h01-n1) * cross(h12-n2,n2-n1) / cross(h12-n2,h01-n1);


    printf("%.3lf %.3lf %.3lf\n",real(ans) + EPS,imag(ans) + EPS,abs(point[0]-ans) );
  }
  return 0;
}