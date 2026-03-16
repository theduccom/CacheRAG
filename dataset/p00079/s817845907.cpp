//Area of Polygon
#include<bits/stdc++.h>
using namespace std;
typedef complex<double> P;

double helon(P a, P b, P c){
  double d1=abs(a-b), d2=abs(b-c), d3=abs(c-a);
  double z=(d1+d2+d3)/2.0;
  return sqrt(z*(z-d1)*(z-d2)*(z-d3));
}

int main(){
  vector<P> pol;
  P tmp;
  double sum=0.0;
  while(scanf("%lf,%lf", &tmp.real(), &tmp.imag())!=EOF) pol.push_back(tmp);
  for(int i=0; i<pol.size()-2; i++)
    sum+=helon(pol[0], pol[i+1], pol[i+2]);
  printf("%.8f\n", sum);
  return 0;
}