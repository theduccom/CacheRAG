#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int size;
  int matrix[10][10];

  int sum_row,sum_column,sum;
  char line[200];
  char* p;

  int i,j;
  char c;

  
  while(1) {

    scanf("%d",&size);
    c=getchar();

    if(size==0) break;

    for(i=0;i<size;i++) {

      fgets(line,sizeof(line),stdin);
      line[strlen(line)-1]='\0';

      p=strtok(line," ");
      matrix[i][0]=atoi(p);

      for(j=1;j<size;j++) {
	p=strtok(NULL," ");
	matrix[i][j]=atoi(p);
      }

    }

    for(i=0;i<size;i++) {
     
      sum_row=0;

      for(j=0;j<size;j++) {

	printf("%5d",matrix[i][j]);

	sum_row+=matrix[i][j];

      }

      printf("%5d\n",sum_row);
    }

    sum=0;

    for(j=0;j<size;j++) {

      sum_column=0;

      for(i=0;i<size;i++) {

	sum_column+=matrix[i][j];

      }

      sum+=sum_column;

      printf("%5d",sum_column);
    }

    printf("%5d\n",sum);

  }

  return 0;

}