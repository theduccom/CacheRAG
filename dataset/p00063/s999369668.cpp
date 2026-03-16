#include <stdio.h>
#include <string.h>

int main(void) {

  int count;
  char str[120];

  char* p;
  int flag;

  int i;


  count=0;

  while(fgets(str,sizeof(str),stdin)!=NULL) {

    /*
    p=strrchr(str,'\n');

    strcpy(p,"");
    */

    str[strlen(str)-1]='\0';

    flag=1;

    for(i=0;i<strlen(str)/2;i++) {

      if(str[i]!=str[strlen(str)-i-1]) flag=0;

    }

    if(flag==1) {
      count++;
      //printf("OK\n");
    }

  }

  printf("%d\n",count);

  return 0;

}

    