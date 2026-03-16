#include<stdio.h>
int main(void)
{
    int n,i,a[10000],b[10],flg,j;
	while(1){
	    scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++){
		    scanf("%d",&a[i]);
		}
		for(i=0;i<10;i++) b[i]=0;
		for(i=0;i<n;i++){
		    b[a[i]]++;
		}
		for(i=0;i<10;i++){
		    flg=0;
		    for(j=0;j<b[i];j++){
			    printf("*");
				flg=1;
			}
			if(flg==0) printf("-");
			printf("\n");
		}
	}
	return 0;
}