#include<iostream>
#include<cmath>
using namespace std;
int main(){
  double x[3],y[3],s=0,z,a,b,c;
  char cc;
  cin>>x[0]>>cc>>y[0];
  cin>>x[1]>>cc>>y[1];
  for(int i=1;cin>>x[i%2+1]>>cc>>y[i%2+1];i++){
    a = sqrt((x[1]-x[0])*(x[1]-x[0])+(y[1]-y[0])*(y[1]-y[0]));
    b = sqrt((x[2]-x[1])*(x[2]-x[1])+(y[2]-y[1])*(y[2]-y[1]));
    c = sqrt((x[2]-x[0])*(x[2]-x[0])+(y[2]-y[0])*(y[2]-y[0]));
    z = (a+b+c)/2;
    s += sqrt(z*(z-a)*(z-b)*(z-c));
  }
  printf("%.7f\n",s);
  return 0;
}