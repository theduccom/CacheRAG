#include<cstdio>
using namespace std;
int main(){

  int a,b,n=0,sum=0;
  double avg = 0;

  while(scanf("%d,%d",&a,&b)!=EOF){
    sum += a*b;
    avg += (double)b;
    n++;
  }
  printf("%d\n%.0f\n",sum,(avg/n)+0.5);
  return (0);
}