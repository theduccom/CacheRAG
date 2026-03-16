#include<stdio.h>
int main(void)
{
    int n,i,flg,j,x,a,flg2;
	
	while(1)	{
		scanf("%d",&n);
		if(n==0)	break;
		while(1)	{
			flg=1;
			for(i=2;i<n;i++){
				if(n%i==0){
					flg=0;
					break;
				}
			}
			
			if(flg==1){
				i=n-2;
				flg2=1;
				for(j=2;j<i;j++){
					if(i%j==0){
						flg2=0;
						break;
					}
				}
			}	
			if(flg==1 && flg2==1){
				break;
			}
			n--;
		}
		
		printf("%d %d\n",i,n);
	}
	return 0;
}