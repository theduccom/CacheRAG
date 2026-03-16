#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define DEB 0

int main(){
  double a;
  while(~scanf("%lf",&a)){
    double sum = a;
    REP(i,1,10){
      if( i%2 ){
	a *= 2.0;
      }else{
	a /= 3.0;
      }
      sum += a;
#if DEB
      printf("%lf\n",a);
#endif
    }
    printf("%lf\n",sum);
  }
  return 0;
}