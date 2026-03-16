#include<iostream>
#include<cmath>
using namespace std;
int main(){
  double x[3],y[3],s=0,z,a[3];
  char cc;
  cin>>x[0]>>cc>>y[0]>>x[1]>>cc>>y[1];
  for(int i=1;cin>>x[i%2+1]>>cc>>y[i%2+1];i++){
    z=0;
    for(int i=0;i<3;i++)a[i]= sqrt((x[i%3]-x[(i+1)%3])*(x[i%3]-x[(i+1)%3])+(y[i%3]-y[(i+1)%3])*(y[i%3]-y[(i+1)%3])),z+=a[i];
    z/=2;s += sqrt(z*(z-a[0])*(z-a[1])*(z-a[2]));
  }
  printf("%.7f\n",s);
}