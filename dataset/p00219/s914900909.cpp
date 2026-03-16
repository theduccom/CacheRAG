#include<stdio.h>
int main(void)
{
	int n,c[10],g,j,i;
	 while(1){
		scanf("%d",&n);
		 if(n==0)	break;
	 for(i=0;i<10;i++){
		c[i]=0;
	}			 
	for(i=0;i<n;i++){
			scanf("%d",&g);
			c[g]+=1;
	}
	for(i=0;i<10;i++){
		if(c[i]>0){
			for(j=0;j<c[i];j++){
				printf("*");
			}
		printf("\n");
		}
		else{
			printf("-\n");
		}
	}
  }
 return 0;
 }