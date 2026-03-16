#include<iostream>
#include<cstdio>
using namespace std;
main(){
  double a;
  while(~scanf("%lf",&a)){
    double S[11];
    S[0]=a;
    for(int i=1;i<10;i++){
      if(i%2) S[i]=S[i-1]*2.0f;
      else S[i]=S[i-1]/3.0f;
    } 
    double res =0.0f;
    for(int i=0;i<10;i++) res += S[i];
    printf("%.8lf\n",res);
  }
}