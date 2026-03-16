#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int n;
  double a,ans,sum;
  while(1){
    n=scanf("%lf",&a);
    if(n==EOF) break;
    ans=sum=a;
    for(int i=2;i<=10;i++){
      if(i%2==0){
	ans*=2;
      }else{
	ans/=3;
      }
      sum+=ans;
    }
    printf("%.8f\n",sum);
  }
  return 0;
}