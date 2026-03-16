#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  double a,an,sum;
  while(cin>>a){
    an=a*2;
    sum=0;
    for(int i=0;i<5;i++){
      sum+=a+an;
      a=an/3;
      an=a*2;
    }
    printf("%.8lf\n",sum);
  }
  return 0;
}