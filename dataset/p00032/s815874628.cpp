#include <cstdio>
using namespace std;

int main(){
  int a,b,x;
  int r,s;
  r=s=0;
  while(scanf("%d,%d,%d",&a,&b,&x)>0){
    if(x*x==a*a+b*b) r++;
    if(a==b) s++;
  }
  printf("%d\n%d\n",r,s);
  return 0;
}