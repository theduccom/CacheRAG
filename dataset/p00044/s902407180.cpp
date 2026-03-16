#include <stdio.h>

int main(void) {

  int n;
  int np,nm;
  int i,flag;

  while(scanf("%d",&n)!=EOF) {

    np=n+1;
    nm=n-1;
    //printf("%d %d\n",np,nm);
    while(1) {

      flag=1;
      //printf("%d\n",np);
      for(i=2;i<np;i++) {
	if(np%i==0) {
	  flag=0;
	  break;
	}
      }
      //printf("%d\n",flag);
      if(flag==1) break;

      np++;
    }	
    //printf("%d",np);
    while(1) {

      flag=1;
      
      for(i=2;i<nm;i++) {
	if(nm%i==0) {
	  flag=0;
	  break;
	}
      }

      if(flag==1) break;

      nm--;
    }

    printf("%d %d\n",nm,np);

  }
   
  return 0;

}