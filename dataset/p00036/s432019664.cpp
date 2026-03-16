#include <stdio.h>
#include <string.h>

int main(void) {

  int fig[64];

  char buf[10];
  
  int i,j;

  while(1) {
  for(i=0;i<8;i++) {

    if(fgets(buf,sizeof(buf),stdin)==NULL) return 0;
    buf[strlen(buf)-1]='\0';

    for(j=0;j<8;j++) {

      fig[8*i+j]=(int)buf[j]-48;

    }

  }

  /*for(i=0;i<64;i++) {

    printf("%d ",fig[i]);

    }*/

  for(i=0;i<64;i++) {

    if(fig[i]==1) {

      //A or C or E or G
      if(fig[i+1]==1) {

	if(fig[i+2]==1) {
	  printf("C\n");
	  break;
	}

	else if(fig[i+10]==1) {
	  printf("E\n");
	  break;
	}

	else if(fig[i+7]==1) {
	  printf("G\n");
	  break;
	}

	else {
	  printf("A\n");
	  break;
	}

      }

      //B or D or F
      else if(fig[i+8]==1) {

	if(fig[i+16]==1) {
	  printf("B\n");
	  break;
	}

	if(fig[i+7]==1) {
	  printf("D\n");
	  break;
	}

	if(fig[i+9]==1) {
	  printf("F\n");
	  break;
	}

      }

    }

  }

  //ツ凝ウツ板陳禿づ敖氾イツづ篠つオ
  fgets(buf,sizeof(buf),stdin);
  }
  return 0;

}