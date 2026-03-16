#include <stdio.h>
#include <string.h>

int main(void) {

  int id;
  int counta=0,countb=0,countab=0,counto=0;
  char btype[3];
  char buf[50];
  char* p;
  
  while(fgets(buf,sizeof(buf),stdin)!=NULL) {

    buf[strlen(buf)-1]='\0';

    p=strtok(buf,",");
    p=strtok(NULL,"");

    if(strcmp(p,"A")==0) counta++;
    else if(strcmp(p,"B")==0) countb++;
    else if(strcmp(p,"AB")==0) countab++;
    else if(strcmp(p,"O")==0) counto++;

  }

  printf("%d\n%d\n%d\n%d\n",counta,countb,countab,counto);

  return 0;

}