#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  double a[10],v[2];
  for(;;){
    if(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&v[0],&v[1]) == EOF) break;
    double x = 0;
    for(int i=0; i<10; i++) x+=a[i];
    x = x/(v[0]+v[1])*v[0];
    for(int i=0; i<10; i++){
      x-=a[i];
      if(x<0.0001){
	cout <<i+1<<endl;
	break;
      }
    }
  }
  return 0;
}