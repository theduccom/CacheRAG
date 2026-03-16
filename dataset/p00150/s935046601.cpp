#include<stdio.h>
int main(void)
{
	int a,i,j,c,d,x,flg1;
	while(1){
		scanf("%d",&a);
		if(a==0) break;
			for(i=a;i>1;i--){
				flg1=0;
				for(j=2;j*j<=i;j++){
					if(i%j==0){
						flg1=1;
						break;
					}
				}
				if(flg1==0){
					x=i-2;
					for(j=2;j*j<=x;j++){
						if(x%j==0){
							flg1=1;
							break;
						}					
					}
				}
				if(flg1==0){
					c=i;
					d=x;
					break;
				}	
			}
		printf("%d %d\n",d,c);
		c=0;
		d=0;
	}
	return 0;
}