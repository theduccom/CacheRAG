#include <stdio.h>
#include <string.h>

int main() {

  int inning;
  char result[50];

  int base[3];
  int out;
  int point;

  int i,j;
  char c;

  scanf("%d",&inning);
  c=getchar();
  
  for(i=0;i<inning;i++) {
    
    for(j=0;j<3;j++) base[j]=0;
    //printf("%d %d %d\n",base[0],base[1],base[2]);
    out=0;
    
    point=0;

    while(1) {

      fgets(result,sizeof(result),stdin);

      result[strlen(result)-1]='\0';

      if(strcmp(result,"OUT")==0) {
	out++;
      }

      if(strcmp(result,"HOMERUN")==0) {
	
	for(j=0;j<3;j++) {
	  if(base[j]==1) point++;
	  base[j]=0;
	}

	point++;
      }

      if(strcmp(result,"HIT")==0) {
	
	if(base[2]==1) point++;

	for(j=0;j<3;j++) {
	  if(base[j]==0) {
	    base[j]=1;
	    break;
	  }
	}
      }
      //printf("%d %d %d %d %d\n",out,point,base[0],base[1],base[2]);
      if(out==3) break;

    }

    printf("%d\n",point);

  }

  return 0;

}