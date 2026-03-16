#include <stdio.h>

int main(void) {

  int l1,l2,l3,l4,l5,l6,l7,l8,l9,l10;
  int v1,v2;

  double intersec;
  int l[10];
  int result;

  int i;


  while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l1,&l2,&l3,&l4,&l5,&l6,&l7,&l8,&l9,&l10,&v1,&v2)!=EOF) {

    intersec=(double)(l1+l2+l3+l4+l5+l6+l7+l8+l9+l10)*v1/(double)(v1+v2);

    l[0]=l1; l[1]=l2; l[2]=l3; l[3]=l4; l[4]=l5; l[5]=l6; l[6]=l7; l[7]=l8; l[8]=l9; l[9]=l10;

    for(i=0;i<10;i++) {

      intersec-=l[i];
      
      if(intersec<=0) {

	printf("%d\n",i+1);
	break;

      }

    }

  }

}