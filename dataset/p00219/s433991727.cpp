#include<stdio.h>
int main(void)
{
    int n,a[10],s,j,i,flg;
	while(1){
	    for(i=0;i<10;i++) a[i]=0;
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++){
		    scanf("%d",&s);
			a[s]++;
		}
		for(i=0;i<10;i++){
		    flg=0;
			for(j=0;j<a[i];j++){
			    printf("*");
				flg=1;
			}
			if(flg==0) printf("-");
			printf("\n");
		}
	}
	return 0;
}