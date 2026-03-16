#include <stdio.h>

int main(void) {

  int vert,horiz,diag;
  int rect=0,diam=0;

  while(scanf("%d,%d,%d",&vert,&horiz,&diag)!=EOF) {

    if(vert*vert+horiz*horiz==diag*diag) rect++;

    if(vert==horiz && vert+horiz>diag) diam++;

  }

  printf("%d\n",rect);

  printf("%d\n",diam);

  return 0;

}