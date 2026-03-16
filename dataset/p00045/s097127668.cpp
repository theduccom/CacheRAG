#include <cstdio>
#include <cmath>
using namespace std;


int main(){
  int p,sp,n;
  sp=n=0;
  float s,ss;
  ss=0.0;
  while(scanf("%d,%f",&p,&s)>0){
      n++;
      sp+=p*s;
      ss+=s;
  }
  printf("%d\n%.0f\n",sp,roundf(ss/n));
  return 0;
}