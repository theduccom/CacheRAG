#include <stdio.h>

int main(void) {

  int n;
  int seq[8],max[8],min[8];
  long imax,imin;
  char c;
  int i,j,k,temp;

  scanf("%d",&n);

  for(k=0;k<n;k++) {
    
    c=getchar();
    for(i=0;i<8;i++) {
      c=getchar();
      seq[i]=c-'0';
    }
    //printf("%d\n",seq[0]);
    for(i=0;i<8;i++) max[i]=seq[i];
    //for(i=0;i<8;i++) printf("%d ",max[i]);
    //puts("");
    for(i=0;i<7;i++) {
      for(j=0;j<7-i;j++) {
	if(max[j]<max[j+1]) {
	  temp=max[j];
	  max[j]=max[j+1];
	  max[j+1]=temp;
	}
      }
    }
    //for(i=0;i<8;i++) printf("%d ",max[i]);
    //puts("");
    imax=10000000*max[0]+1000000*max[1]+100000*max[2]+10000*max[3]+1000*max[4]+100*max[5]+10*max[6]+max[7];
    //printf("%ld\n",imax);
    for(i=0;i<8;i++) min[i]=seq[i];

    for(i=0;i<7;i++) {
      for(j=0;j<7-i;j++) {
	if(min[j]>min[j+1]) {
	  temp=min[j];
	  min[j]=min[j+1];
	  min[j+1]=temp;
	}
      }
    }
    //for(i=0;i<8;i++) printf("%d ",min[i]);
    //puts("");
    imin=10000000*min[0]+1000000*min[1]+100000*min[2]+10000*min[3]+1000*min[4]+100*min[5]+10*min[6]+min[7];
    //printf("%ld\n",imin);
    printf("%ld\n",imax-imin);
    
  }

  return 0;

}