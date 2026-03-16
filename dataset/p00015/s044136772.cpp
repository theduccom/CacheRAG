#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int n;

  char buf[1000];
  char outbuf[1000];

  char c;

  int a[1000],b[1000];
  int result[1000];
  
  int sum,carry;
  int idx1,idx2;
  int maxlen;

  int i,j;

  scanf("%d",&n);

  c=getchar();

  for(i=0;i<n;i++) {

    fgets(buf,sizeof(buf),stdin);

    idx1=0;

    while(buf[idx1]!='\n') {

      a[idx1]=buf[idx1]-48;

      idx1++;

    }

    //for(j=0;j<idx1;j++) printf("%d",a[j]);

    fgets(buf,sizeof(buf),stdin);

    idx2=0;

    while(buf[idx2]!='\n') {

      b[idx2]=buf[idx2]-48;

      idx2++;

    }

    if(idx1>idx2) maxlen=idx1;
    
    else maxlen=idx2;

    if(maxlen>80) {

      printf("overflow\n");

      continue;

    }

    carry=0;

    for(j=0;j<maxlen;j++) {

      if(j<idx1 && j<idx2) sum=a[idx1-j-1]+b[idx2-j-1]+carry;

      else if(j>=idx1) sum=b[idx2-j-1]+carry;

      else sum=a[idx1-j-1]+carry;


      if(sum>=10) carry=1;

      else carry=0;

      result[j]=sum%10;

    }
    //printf("%d\n",carry);
    if(carry==1) {

      if(maxlen>=80) printf("overflow\n");

      else {

	outbuf[0]='1';

	for(j=0;j<maxlen;j++) {

	  outbuf[j+1]=result[maxlen-j-1]+48;

	}

	outbuf[maxlen+1]='\0';

	printf("%s",outbuf);

	puts("");

      }

    }

    else {

      for(j=0;j<maxlen;j++) {

	outbuf[j]=result[maxlen-j-1]+48;

      }

      outbuf[maxlen]='\0';

      printf("%s",outbuf);

      puts("");

    }

  }

  return 0;

}
    