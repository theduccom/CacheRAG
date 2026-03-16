#include <stdio.h>

int main(){
  int n,N;
  double x,y,v,t;

  while(scanf("%lf",&v)!=EOF){

    t=v/9.8;

    y=4.9*t*t;
    
    for(n=0;y>=5*n-5;n++);

    N=n;
    
    printf("%d\n",N);
  }
  
  return 0;
  
}

  