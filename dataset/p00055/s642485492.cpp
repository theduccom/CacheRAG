#include <stdio.h>

int main(void) {

  double a[10];
  double s;
  int i;
  
  while(scanf("%lf",&a[0])!=EOF) {
 
    for(i=0;i<4;i++) {

      a[2*i+1]=2.0*a[2*i];
      a[2*i+2]=a[2*i+1]/3.0;
    
    }

    a[9]=2.0*a[8];
    
    s=0.0;
    
    for(i=0;i<10;i++) {
      
      s+=a[i];
      
    }
    
    printf("%.8lf\n",s);
    
  }

  return 0;

}